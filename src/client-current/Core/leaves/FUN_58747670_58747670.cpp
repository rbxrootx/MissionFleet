// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58747670 .. +0x408 bytes.
extern "C" __declspec(naked) void FUN_58747670_58747670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0C 86 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x86
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 D1 03 00 00: je 0x58747a70
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 0F 87 B9 03 00 00: ja 0x58747a69
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 8D 78 7A 74 58: jmp dword ptr [ecx*4 + 0x58747a78]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0x7a
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E D3 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd3
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 6
        ; Exact mapped bytes 74 6A: je 0x5874773c
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 D3 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd3
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 7
        ; Exact mapped bytes 74 52: je 0x5874773c
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE D2 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 74 3A: je 0x5874773c
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D6 D2 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 5
        ; Exact mapped bytes 74 22: je 0x5874773c
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 D1 FA D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 7d3h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3B 16 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 36 03 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CA 83 D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x58747784
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 85 D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 50h
        ; Exact mapped bytes 7C 22: jl 0x58747784
        __asm _emit 0x7c
        __asm _emit 0x22
        ; Exact mapped bytes E8 89 FA D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        push 0
        push 7ddh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F3 15 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 EE 02 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E0 02 00 00: jmp 0x58747a69
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4F D2 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xd2
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 8
        ; Exact mapped bytes 74 22: je 0x587477c3
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 4A FA D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 7d4h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B4 15 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 AF 02 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1100h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 10 78 D6 FF: call 0x584aefe0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 7C 0F: jl 0x587477e4
        __asm _emit 0x7c
        __asm _emit 0x0f
        push 10h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 01 78 D6 FF: call 0x584aefe0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x78
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 7D 22: jge 0x58747806
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes E8 07 FA D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xfa
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 7e5h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 71 15 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 6C 02 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5E 02 00 00: jmp 0x58747a69
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD D1 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd1
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 2
        ; Exact mapped bytes 74 3A: je 0x5874785d
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B5 D1 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xd1
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 22: je 0x5874785d
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 B0 F9 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 7d5h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1A 15 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x15
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 15 02 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5874786f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 74 4C: je 0x587478c1
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 82 D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x587478bf
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DE 83 D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 1eh
        ; Exact mapped bytes 7E 22: jle 0x587478bf
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 4E F9 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        push 0
        push 0
        push 0
        push 7d6h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B8 14 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A5: jmp 0x58747866
        __asm _emit 0xeb
        __asm _emit 0xa5
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x58747a69
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 D1 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd1
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 74 52: je 0x58747930
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA D0 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 3
        ; Exact mapped bytes 74 3A: je 0x58747930
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 D0 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 74 22: je 0x58747930
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 DD F8 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        push 0
        push 7dah
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 47 14 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58747942
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 74 4C: je 0x58747994
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC 81 D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x58747992
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B 83 D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, 55h
        ; Exact mapped bytes 7E 22: jle 0x58747992
        __asm _emit 0x7e
        __asm _emit 0x22
        ; Exact mapped bytes E8 7B F8 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        push 0
        push 0
        push 7dbh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E5 13 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB A5: jmp 0x58747939
        __asm _emit 0xeb
        __asm _emit 0xa5
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x58747a69
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F D0 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 74 3A: je 0x587479eb
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 27 D0 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 6
        ; Exact mapped bytes 74 22: je 0x587479eb
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes E8 22 F8 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf8
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        push 0
        push 0
        push 0
        push 7e2h
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 8C 13 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x58747a72
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 81 D6 FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x81
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x58747a30
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6A 82 D6 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, al
        xor eax, 55h
        cmp eax, 50h
        ; Exact mapped bytes 7D 1F: jge 0x58747a30
        __asm _emit 0x7d
        __asm _emit 0x1f
        ; Exact mapped bytes E8 DA F7 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf7
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        push 0
        push 7deh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 44 13 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x58747a72
        __asm _emit 0xeb
        __asm _emit 0x42
        ; Exact mapped bytes EB 37: jmp 0x58747a69
        __asm _emit 0xeb
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A6 CF D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xcf
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 74 1F: je 0x58747a69
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes E8 A1 F7 D8 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf7
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        push 0
        push 0
        push 0
        push 7e6h
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 0B 13 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x13
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 09: jmp 0x58747a72
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x58747a72
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
