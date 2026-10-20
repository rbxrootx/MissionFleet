// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E5B20 .. +0x711 bytes.
extern "C" __declspec(naked) void FUN_584e5b20_584E5B20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 EA 06 00 00: je 0x584e622e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 7ch], 40000000h
        ; Exact mapped bytes 75 1D: jne 0x584e5b6d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 98h]
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x584e5b6d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 9bh]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x584e5c1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 99h]
        test eax, eax
        ; Exact mapped bytes 0F 85 8E 00 00 00: jne 0x584e5c1f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 75 0F: jne 0x584e5bac
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4ch]
        sub ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [edx + 94h]
        ; Exact mapped bytes 76 53: jbe 0x584e5c1f
        __asm _emit 0x76
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 9ah]
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x584e5c0b
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 0F: or ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 98h], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 91 FD FF: call 0x584bed60
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x91
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 F9 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0A: jmp 0x584e5c15
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 99h], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 9bh], 1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 74 36: je 0x584e5c6c
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 74 1F: je 0x584e5c6c
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 60h], 40000000h
        ; Exact mapped bytes 74 13: je 0x584e5c6c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 40000000h
        ; Exact mapped bytes 0F 85 A2 04 00 00: jne 0x584e610e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 58h]
        ; Exact mapped bytes 75 12: jne 0x584e5c8c
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 5ch]
        ; Exact mapped bytes 0F 84 EC 01 00 00: je 0x584e5e78
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 2
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x584e5da2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x584e5d15
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x584e5d15
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x584e5d02
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x584e5d02
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x584e5cde
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584e5cfa
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x584e5ced
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x584e5cf4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584e5d0d
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584e5d24
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x584e5d88
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x584e5d88
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x584e5d75
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x584e5d75
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x584e5d51
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584e5d6d
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x584e5d60
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x584e5d67
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584e5d80
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584e5d97
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x584e5e5b
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 64h], 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x584e5e5b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 24: jle 0x584e5dd9
        __asm _emit 0x7e
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7C 0B: jl 0x584e5dcb
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 06: jmp 0x584e5dd1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 26: jmp 0x584e5dff
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        neg eax
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7F 0D: jg 0x584e5df3
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        neg edx
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 06: jmp 0x584e5df9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 24: jle 0x584e5e2f
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes 7C 0B: jl 0x584e5e21
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 06: jmp 0x584e5e27
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 26: jmp 0x584e5e55
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        neg ecx
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7F 0D: jg 0x584e5e49
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        neg eax
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 06: jmp 0x584e5e4f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 40000000h
        ; Exact mapped bytes 75 11: jne 0x584e5e78
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 F3 2C 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xf3
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x584e5f30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 7E 4A: jle 0x584e5ee8
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        sub eax, dword ptr [edx + 28h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7F 15: jg 0x584e5ecd
        __asm _emit 0x7f
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 F6 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e5ee6
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 88h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B F6 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x584e5f30
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7F 15: jg 0x584e5f17
        __asm _emit 0x7f
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C F6 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e5f30
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 F6 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x584e5fe8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 7E 4A: jle 0x584e5fa0
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        sub eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7F 15: jg 0x584e5f85
        __asm _emit 0x7f
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E F6 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e5f9e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 88h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 F6 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf6
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x584e5fe8
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7F 15: jg 0x584e5fcf
        __asm _emit 0x7f
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 F5 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf5
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e5fe8
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 88h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 F5 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 58h]
        ; Exact mapped bytes 0F 85 12 01 00 00: jne 0x584e610c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 5ch]
        ; Exact mapped bytes 0F 85 00 01 00 00: jne 0x584e610c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x584e610c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 80h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x584e610c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x584e604c
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 1
        ; Exact mapped bytes 75 32: jne 0x584e6095
        __asm _emit 0x75
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 200h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 02: or cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x02
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        ; Exact mapped bytes EB 77: jmp 0x584e610c
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 75 60: jne 0x584e610c
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 500h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffdh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes EB 07: jmp 0x584e6115
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 98h]
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x584e614b
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 E8 F9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B F9 FF FF: call 0x584e5aa0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 12: jne 0x584e614b
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 8B FD FF: call 0x584bed30
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 99h]
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x584e6183
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6F FE FD FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 1D: jne 0x584e6183
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, 0fff0h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 50 24: and dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 99h], 1
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 99h]
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x584e61a4
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, 0fff0h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 23 50 24: and dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584e61c5
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584e61c5
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x584e622e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584e61e8
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x584e61ce
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 F4 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf4
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584e620c
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584e622e
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584e622c
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FC F3 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 50h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x584e61ce
        __asm _emit 0xeb
        __asm _emit 0xa0
        pop esi
        mov esp, ebp
    }
}
