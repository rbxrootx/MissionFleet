// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046156F .. +0x381 bytes.
extern "C" __declspec(naked) void FUN_0046156f_0046156F() {
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
        ; Exact mapped bytes 0F 84 49 03 00 00: je 0x4618de
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
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
        ; Exact mapped bytes E8 3C 72 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 0F 82 2E 03 00 00: jb 0x4618de
        __asm _emit 0x0f
        __asm _emit 0x82
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
        ; Exact mapped bytes E8 21 72 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        sub eax, dword ptr [edx + 1ch]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 0F 84 98 01 00 00: je 0x46176d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 0F 84 66 01 00 00: je 0x461748
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        add edx, 10h
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        imul ecx, ecx, 0ea60h
        add ecx, dword ptr [ebp - 4]
        xor eax, eax
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F 82 37 01 00 00: jb 0x461748
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x461621
        __asm _emit 0x77
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 82 27 01 00 00: jb 0x461748
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 18h]
        imul ecx, ecx, 0ea60h
        add ecx, dword ptr [ebp - 4]
        xor eax, eax
        mov esi, dword ptr [edx + 10h]
        sub esi, ecx
        mov ecx, dword ptr [edx + 14h]
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
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 72 2D: jb 0x4616a5
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 77 0A: ja 0x461684
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 72 21: jb 0x4616a5
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
        ; Exact mapped bytes E8 4D 71 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 927c0h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 30h], eax
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 29: jmp 0x4616ce
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
        ; Exact mapped bytes E8 2C 71 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x71
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
        ; Exact mapped bytes 75 22: jne 0x461711
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 5F FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5f
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
        ; Exact mapped bytes E8 D1 70 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 35: jmp 0x461746
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40cd8h]
        ; Exact mapped bytes E8 5F 53 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1C: je 0x461746
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
        ; Exact mapped bytes E8 EC 5A 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x5a
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x461768
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E 5F FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x5f
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
        ; Exact mapped bytes E8 78 70 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x4618de
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
        ; Exact mapped bytes 0F 82 28 01 00 00: jb 0x4618be
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 77 0E: ja 0x4617a6
        __asm _emit 0x77
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F 82 18 01 00 00: jb 0x4618be
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
        ; Exact mapped bytes 72 2D: jb 0x461824
        __asm _emit 0x72
        __asm _emit 0x2d
        ; Exact mapped bytes 77 0A: ja 0x461803
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 48h]
        ; Exact mapped bytes 72 21: jb 0x461824
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
        ; Exact mapped bytes E8 CE 6F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        add eax, 927c0h
        sub eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov dword ptr [ebp - 50h], eax
        mov dword ptr [ebp - 4ch], ecx
        ; Exact mapped bytes EB 29: jmp 0x46184d
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
        ; Exact mapped bytes E8 AD 6F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6f
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
        ; Exact mapped bytes 75 22: jne 0x461886
        __asm _emit 0x75
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 5E FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 5C 6F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x4618bc
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
        ; Exact mapped bytes E8 E9 51 FC FF: call 0x426a80
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1C: je 0x4618bc
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
        ; Exact mapped bytes E8 76 59 02 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x4618de
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 5D FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x5d
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
        ; Exact mapped bytes E8 02 6F 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 F6 6E 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x6e
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
