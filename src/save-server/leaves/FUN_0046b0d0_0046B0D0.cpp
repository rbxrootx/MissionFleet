// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046B0D0 .. +0x344 bytes.
extern "C" __declspec(naked) void FUN_0046b0d0_0046B0D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push 19h
        ; Exact mapped bytes E8 D3 57 00 00: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 37 03 00 00: call 0x46b420
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 0D 00 8B 68 00: cmp ecx, dword ptr [0x688b00]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 11: jne 0x46b10b
        __asm _emit 0x75
        __asm _emit 0x11
        push 19h
        ; Exact mapped bytes E8 4F 58 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 05 03 00 00: jmp 0x46b410
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1B: jne 0x46b12c
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 EA 03 00 00: call 0x46b500
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 65 04 00 00: call 0x46b580
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 2E 58 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 E4 02 00 00: jmp 0x46b410
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x46b13e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 0F 83 47 01 00 00: jae 0x46b28f
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 30h
        mov ecx, dword ptr [eax + 67daa8h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 2D 01 00 00: jne 0x46b28a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x46b16f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 101h
        ; Exact mapped bytes 73 0C: jae 0x46b184
        __asm _emit 0x73
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 688ca0h], 0
        ; Exact mapped bytes EB E2: jmp 0x46b166
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46b196
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 73 7B: jae 0x46b217
        __asm _emit 0x73
        __asm _emit 0x7b
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 30h
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*8 + 67dab8h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 09: jmp 0x46b1ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 2
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 4D: je 0x46b212
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        test eax, eax
        ; Exact mapped bytes 74 41: je 0x46b212
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x46b1e6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 77 1D: ja 0x46b210
        __asm _emit 0x77
        __asm _emit 0x1d
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [eax + 688ca1h]
        or dl, byte ptr [ecx + 67daa0h]
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 688ca1h], dl
        ; Exact mapped bytes EB CD: jmp 0x46b1dd
        __asm _emit 0xeb
        __asm _emit 0xcd
        ; Exact mapped bytes EB 9F: jmp 0x46b1b1
        __asm _emit 0xeb
        __asm _emit 0x9f
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x46b18d
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 0D 00 8B 68 00: mov dword ptr [0x688b00], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 8B 68 00 01 00 00 00: mov dword ptr [0x688b8c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 00 8B 68 00: mov edx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 4A 02 00 00: call 0x46b480
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 8D 68 00: mov dword ptr [0x688da4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46b250
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 73 1E: jae 0x46b274
        __asm _emit 0x73
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 8C 41 AC DA 67 00: mov cx, word ptr [ecx + eax*2 + 0x67daac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x41
        __asm _emit 0xac
        __asm _emit 0xda
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 0C 55 80 8B 68 00: mov word ptr [edx*2 + 0x688b80], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x55
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x46b247
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes E8 07 03 00 00: call 0x46b580
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 D0 56 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes E9 86 01 00 00: jmp 0x46b410
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A6 FE FF FF: jmp 0x46b135
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 7C B9 68 00: call dword ptr [0x68b97c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 85 3C 01 00 00: jne 0x46b3e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x46b2b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 101h
        ; Exact mapped bytes 73 0C: jae 0x46b2cd
        __asm _emit 0x73
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 24h]
        mov byte ptr [edx + 688ca0h], 0
        ; Exact mapped bytes EB E2: jmp 0x46b2af
        __asm _emit 0xeb
        __asm _emit 0xe2
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes A3 00 8B 68 00: mov dword ptr [0x688b00], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 A4 8D 68 00 00 00 00 00: mov dword ptr [0x688da4], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 0F 86 B5 00 00 00: jbe 0x46b39e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ah]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 09: jmp 0x46b2fa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 2
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 47: je 0x46b34c
        __asm _emit 0x74
        __asm _emit 0x47
        mov edx, dword ptr [ebp - 28h]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x46b34c
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB 09: jmp 0x46b326
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 28h]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 77 17: ja 0x46b34a
        __asm _emit 0x77
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax + 688ca1h]
        or cl, 4
        mov edx, dword ptr [ebp - 24h]
        mov byte ptr [edx + 688ca1h], cl
        ; Exact mapped bytes EB D3: jmp 0x46b31d
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes EB A5: jmp 0x46b2f1
        __asm _emit 0xeb
        __asm _emit 0xa5
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x46b35e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 24h]
        add eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0ffh
        ; Exact mapped bytes 73 17: jae 0x46b37e
        __asm _emit 0x73
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 24h]
        mov dl, byte ptr [ecx + 688ca1h]
        or dl, 8
        mov eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 688ca1h], dl
        ; Exact mapped bytes EB D7: jmp 0x46b355
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes 8B 0D 00 8B 68 00: mov ecx, dword ptr [0x688b00]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 F6 00 00 00: call 0x46b480
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes A3 A4 8D 68 00: mov dword ptr [0x688da4], eax
        __asm _emit 0xa3
        __asm _emit 0xa4
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 8B 68 00 01 00 00 00: mov dword ptr [0x688b8c], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x46b3a8
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 8C 8B 68 00 00 00 00 00: mov dword ptr [0x688b8c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x46b3ba
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 6
        ; Exact mapped bytes 73 0F: jae 0x46b3cf
        __asm _emit 0x73
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 C7 04 45 80 8B 68 00 00 00: mov word ptr [eax*2 + 0x688b80], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x45
        __asm _emit 0x80
        __asm _emit 0x8b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E2: jmp 0x46b3b1
        __asm _emit 0xeb
        __asm _emit 0xe2
        ; Exact mapped bytes E8 AC 01 00 00: call 0x46b580
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 75 55 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 2E: jmp 0x46b410
        __asm _emit 0xeb
        __asm _emit 0x2e
        ; Exact mapped bytes 83 3D BC 72 68 00 00: cmp dword ptr [0x6872bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x72
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 18: je 0x46b403
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes E8 10 01 00 00: call 0x46b500
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 8B 01 00 00: call 0x46b580
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 19h
        ; Exact mapped bytes E8 54 55 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 0D: jmp 0x46b410
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 19h
        ; Exact mapped bytes E8 46 55 00 00: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ret
    }
}
