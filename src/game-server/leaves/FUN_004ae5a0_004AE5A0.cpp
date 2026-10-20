// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AE5A0 .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_004ae5a0_004AE5A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push 19h
        ; Exact mapped bytes E8 43 6C 00 00: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 37 03 00 00: call 0x4ae8f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 0D 7C 02 5E 00: cmp ecx, dword ptr [0x5e027c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x4ae5db
        __asm _emit 0x75
        __asm _emit 0x11
        push 19h
        ; Exact mapped bytes E8 BF 6C 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 05 03 00 00: jmp 0x4ae8e0
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1B: jne 0x4ae5fc
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 EA 03 00 00: call 0x4ae9d0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 65 04 00 00: call 0x4aea50
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 9E 6C 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x4ae8e0
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae60e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 83 47 01 00 00: jae 0x4ae75f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [eax + 5d1308h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x4ae75a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae63f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 101h
        ; Exact mapped bytes 73 0C: jae 0x4ae654
        __asm _emit 0x73
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 5e03a0h], 0
        ; Exact mapped bytes EB E2: jmp 0x4ae636
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae666
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 73 7B: jae 0x4ae6e7
        __asm _emit 0x73
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*8 + 5d1318h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ae68a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x4ae6e2
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x4ae6e2
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x4ae6b6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 77 1D: ja 0x4ae6e0
        __asm _emit 0x77
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [eax + 5e03a1h]
        or dl, byte ptr [ecx + 5d1300h]
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 5e03a1h], dl
        ; Exact mapped bytes EB CD: jmp 0x4ae6ad
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes EB 9F: jmp 0x4ae681
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x4ae65d
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 7C 02 5E 00: mov dword ptr [0x5e027c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 02 5E 00 01 00 00 00: mov dword ptr [0x5e028c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 7C 02 5E 00: mov edx, dword ptr [0x5e027c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 4A 02 00 00: call 0x4ae950
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 04 5E 00: mov dword ptr [0x5e04a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae720
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 73 1E: jae 0x4ae744
        __asm _emit 0x73
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 8C 41 0C 13 5D 00: mov cx, word ptr [ecx + eax*2 + 0x5d130c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x13
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 0C 55 80 02 5E 00: mov word ptr [edx*2 + 0x5e0280], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x55
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x4ae717
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes E8 07 03 00 00: call 0x4aea50
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 40 6B 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x4ae8e0
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x4ae605
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 48 23 5E 00: call dword ptr [0x5e2348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x4ae8b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae788
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 101h
        ; Exact mapped bytes 73 0C: jae 0x4ae79d
        __asm _emit 0x73
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 24h]
        mov byte ptr [edx + 5e03a0h], 0
        ; Exact mapped bytes EB E2: jmp 0x4ae77f
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 7C 02 5E 00: mov dword ptr [0x5e027c], eax
        __asm _emit 0xa3
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 A4 04 5E 00 00 00 00 00: mov dword ptr [0x5e04a4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 0F 86 B5 00 00 00: jbe 0x4ae86e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ah]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 09: jmp 0x4ae7ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 2
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 47: je 0x4ae81c
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 28h]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x4ae81c
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x4ae7f6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 77 17: ja 0x4ae81a
        __asm _emit 0x77
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax + 5e03a1h]
        or cl, 4
        mov edx, dword ptr [ebp - 24h]
        mov byte ptr [edx + 5e03a1h], cl
        ; Exact mapped bytes EB D3: jmp 0x4ae7ed
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes EB A5: jmp 0x4ae7c1
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x4ae82e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0ffh
        ; Exact mapped bytes 73 17: jae 0x4ae84e
        __asm _emit 0x73
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov dl, byte ptr [ecx + 5e03a1h]
        or dl, 8
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 5e03a1h], dl
        ; Exact mapped bytes EB D7: jmp 0x4ae825
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D 7C 02 5E 00: mov ecx, dword ptr [0x5e027c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 F6 00 00 00: call 0x4ae950
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 04 5E 00: mov dword ptr [0x5e04a4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 02 5E 00 01 00 00 00: mov dword ptr [0x5e028c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4ae878
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 8C 02 5E 00 00 00 00 00: mov dword ptr [0x5e028c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4ae88a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 73 0F: jae 0x4ae89f
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 C7 04 45 80 02 5E 00 00 00: mov word ptr [eax*2 + 0x5e0280], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E2: jmp 0x4ae881
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes E8 AC 01 00 00: call 0x4aea50
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 E5 69 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x4ae8e0
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D 54 ED 5D 00 00: cmp dword ptr [0x5ded54], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0xed
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x4ae8d3
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes E8 10 01 00 00: call 0x4ae9d0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 01 00 00: call 0x4aea50
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 C4 69 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 0D: jmp 0x4ae8e0
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 19h
        ; Exact mapped bytes E8 B6 69 00 00: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
