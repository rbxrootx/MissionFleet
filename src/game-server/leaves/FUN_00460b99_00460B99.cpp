// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00460B99 .. +0x38E bytes.
extern "C" __declspec(naked) void FUN_00460b99_00460B99() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 56 03 00 00: je 0x460f15
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 12 7C 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 0F 82 3B 03 00 00: jb 0x460f15
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x3b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 0F 85 2E 03 00 00: jne 0x460f15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 EA 7B 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        sub eax, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x460da4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x460d7f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        imul eax, eax, 0ea60h
        add eax, dword ptr [ebp - 4]
        xor edx, edx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 82 37 01 00 00: jb 0x460d7f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x460c58
        __asm _emit 0x77
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 82 27 01 00 00: jb 0x460d7f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 18h]
        imul eax, eax, 0ea60h
        add eax, dword ptr [ebp - 4]
        xor edx, edx
        mov esi, dword ptr [ecx + 10h]
        sub esi, eax
        mov eax, dword ptr [ecx + 14h]
        sbb eax, edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 10h], esi
        mov dword ptr [ecx + 14h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 20h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov eax, 927c0h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 72 2D: jb 0x460cdc
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 77 0A: ja 0x460cbb
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 72 21: jb 0x460cdc
        __asm _emit 0x72
        __asm _emit 0x21
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 16 7B 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7b
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 927c0h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 29: jmp 0x460d05
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 F5 7A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 10h]
        adc edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [ebp - 4]
        xor esi, esi
        sub eax, ecx
        sbb edx, esi
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], edx
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 18h], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 20h]
        cmp ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 75 22: jne 0x460d48
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 69 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 9A 7A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x460d7d
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 28 5D FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x5d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1C: je 0x460d7d
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        push 1
        push 80011100h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 64 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x460d9f
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F7 68 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 41 7A 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x460f15
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        add eax, 10h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 927c0h
        xor edx, edx
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 3ch], ecx
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 82 28 01 00 00: jb 0x460ef5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x460ddd
        __asm _emit 0x77
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 82 18 01 00 00: jb 0x460ef5
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        add edx, 927c0h
        xor eax, eax
        mov esi, dword ptr [ecx + 10h]
        sub esi, edx
        mov ecx, dword ptr [ecx + 14h]
        sbb ecx, eax
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 10h], esi
        mov dword ptr [edx + 14h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [eax + 20h], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 10h
        mov ecx, 927c0h
        sub ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 48h], ecx
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 72 2D: jb 0x460e5b
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 77 0A: ja 0x460e3a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 72 21: jb 0x460e5b
        __asm _emit 0x72
        __asm _emit 0x21
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 97 79 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 927c0h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes EB 29: jmp 0x460e84
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        ; Exact mapped bytes FF 15 F8 23 5E 00: call dword ptr [0x5e23f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 76 79 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        mov ecx, dword ptr [ebp - 10h]
        add eax, dword ptr [ecx + 10h]
        adc edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [ebp - 4]
        xor esi, esi
        sub eax, ecx
        sbb edx, esi
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], edx
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1ch], edx
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 20h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 22: jne 0x460ebd
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB 67 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 25 79 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x460ef3
        __asm _emit 0xeb
        __asm _emit 0x36
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40cd8h]
        ; Exact mapped bytes E8 B2 5B FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x460ef3
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        push 1
        push 80011100h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 63 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x460f15
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 67 FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        cmp esi, esp
        ; Exact mapped bytes E8 CB 78 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 BF 78 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
