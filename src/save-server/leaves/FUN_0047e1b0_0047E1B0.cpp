// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047E1B0 .. +0x3A0 bytes.
extern "C" __declspec(naked) void FUN_0047e1b0_0047E1B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 83 3D 40 75 68 00 00: cmp dword ptr [0x687540], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 30 03 00 00: je 0x47e501
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 75 68 00 00: cmp dword ptr [0x687550], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 26: jne 0x47e200
        __asm _emit 0x75
        __asm _emit 0x26
        push 687550h
        push 1004h
        xor eax, eax
        ; Exact mapped bytes 66 A1 9C 75 68 00: mov ax, word ptr [0x68759c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        ; Exact mapped bytes E8 8C 36 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x47e200
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 5ch
        push 63f4b4h
        push 2
        push 202h
        ; Exact mapped bytes E8 AD 85 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 30h], eax
        push 5eh
        push 63f4b4h
        push 2
        push 202h
        ; Exact mapped bytes E8 94 85 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        push 60h
        push 63f4b4h
        push 2
        push 101h
        ; Exact mapped bytes E8 7B 85 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 2ch], eax
        push 62h
        push 63f4b4h
        push 2
        push 202h
        ; Exact mapped bytes E8 62 85 FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 12: je 0x47e27c
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0C: je 0x47e27c
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 06: je 0x47e27c
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 75 05: jne 0x47e281
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 41 02 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e299
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 100h
        ; Exact mapped bytes 7D 13: jge 0x47e2b5
        __asm _emit 0x7d
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB DB: jmp 0x47e290
        __asm _emit 0xeb
        __asm _emit 0xdb
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D 50 75 68 00: mov ecx, dword ptr [0x687550]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 7C B9 68 00: call dword ptr [0x68b97c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x47e2cf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F3 01 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 2
        ; Exact mapped bytes 76 05: jbe 0x47e2da
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 0ffffh
        ; Exact mapped bytes 89 15 CC E0 67 00: mov dword ptr [0x67e0cc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 57: jle 0x47e349
        __asm _emit 0x7e
        __asm _emit 0x57
        lea eax, [ebp - 0eh]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 09: jmp 0x47e303
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 2
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x47e349
        __asm _emit 0x74
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx + 1]
        test edx, edx
        ; Exact mapped bytes 74 2F: je 0x47e349
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 09: jmp 0x47e32f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 7F 0B: jg 0x47e347
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp - 20h]
        mov byte ptr [edx], 0
        ; Exact mapped bytes EB DF: jmp 0x47e326
        __asm _emit 0xeb
        __asm _emit 0xdf
        ; Exact mapped bytes EB B1: jmp 0x47e2fa
        __asm _emit 0xeb
        __asm _emit 0xb1
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 30h]
        add eax, 2
        push eax
        push 100h
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        push 1
        ; Exact mapped bytes E8 3A 86 FF FF: call 0x4769a0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x86
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x47e372
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 50 01 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 C7 02 00 00: mov word ptr [edx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x47e392
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 100h
        ; Exact mapped bytes 7D 15: jge 0x47e3b0
        __asm _emit 0x7d
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 45 E0: mov ax, word ptr [ebp - 0x20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 2
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB D9: jmp 0x47e389
        __asm _emit 0xeb
        __asm _emit 0xd9
        push 0
        push 0
        mov edx, dword ptr [ebp - 1ch]
        add edx, 2
        push edx
        push 100h
        mov eax, dword ptr [ebp - 28h]
        push eax
        push 1
        ; Exact mapped bytes E8 55 37 00 00: call 0x481b20
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x47e3d7
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x47e4c2
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D CC E0 67 00 01: cmp dword ptr [0x67e0cc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 5B: jle 0x47e443
        __asm _emit 0x7e
        __asm _emit 0x5b
        lea edx, [ebp - 0eh]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 09: jmp 0x47e3f9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 2
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        test edx, edx
        ; Exact mapped bytes 74 3F: je 0x47e443
        __asm _emit 0x74
        __asm _emit 0x3f
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 1]
        test ecx, ecx
        ; Exact mapped bytes 74 33: je 0x47e443
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 09: jmp 0x47e425
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 1]
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 7F 0F: jg 0x47e441
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 C7 44 4A 02 00 80: mov word ptr [edx + ecx*2 + 2], 0x8000
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x44
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes EB DB: jmp 0x47e41c
        __asm _emit 0xeb
        __asm _emit 0xdb
        ; Exact mapped bytes EB AD: jmp 0x47e3f0
        __asm _emit 0xeb
        __asm _emit 0xad
        mov eax, dword ptr [ebp - 30h]
        add eax, 2
        ; Exact mapped bytes A3 C0 DE 67 00: mov dword ptr [0x67dec0], eax
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 2
        ; Exact mapped bytes 89 0D C4 DE 67 00: mov dword ptr [0x67dec4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 75 68 00 00: cmp dword ptr [0x687588], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x47e474
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        ; Exact mapped bytes 8B 15 88 75 68 00: mov edx, dword ptr [0x687588]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 EF 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes A3 88 75 68 00: mov dword ptr [0x687588], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 8C 75 68 00 00: cmp dword ptr [0x68758c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 11: je 0x47e496
        __asm _emit 0x74
        __asm _emit 0x11
        push 2
        ; Exact mapped bytes 8B 0D 8C 75 68 00: mov ecx, dword ptr [0x68758c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 CD 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 89 15 8C 75 68 00: mov dword ptr [0x68758c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 B6 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 A8 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 8A 00 00 00: jmp 0x47e54c
        __asm _emit 0xe9
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 93 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 85 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes E8 77 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        mov edx, dword ptr [ebp - 28h]
        push edx
        ; Exact mapped bytes E8 69 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes EB 4B: jmp 0x47e54c
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes C7 05 C0 DE 67 00 CA DE 67 00: mov dword ptr [0x67dec0], 0x67deca
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 C4 DE 67 00 CA DE 67 00: mov dword ptr [0x67dec4], 0x67deca
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0xca
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes A1 88 75 68 00: mov eax, dword ptr [0x687588]
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 3E 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 0D 8C 75 68 00: mov ecx, dword ptr [0x68758c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 2D 8E FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 88 75 68 00 00 00 00 00: mov dword ptr [0x687588], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 8C 75 68 00 00 00 00 00: mov dword ptr [0x68758c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
