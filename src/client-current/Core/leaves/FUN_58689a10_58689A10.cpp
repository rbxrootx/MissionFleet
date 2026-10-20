// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58689A10 .. +0x570 bytes.
extern "C" __declspec(naked) void FUN_58689a10_58689A10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
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
        ; Exact mapped bytes 0F 84 BE 04 00 00: je 0x58689ef4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 74 1B: je 0x58689a68
        __asm _emit 0x74
        __asm _emit 0x1b
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
        ; Exact mapped bytes 0F 85 59 04 00 00: jne 0x58689ec1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x59
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 12: jne 0x58689a88
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 70h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x58689b9d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 70h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x58689b04
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x58689b04
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x58689af1
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x58689af1
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x58689acd
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58689ae9
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x58689adc
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58689ae3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58689afc
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58689b13
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x58689b77
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x58689b77
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x58689b64
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x58689b64
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x58689b40
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58689b5c
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x58689b4f
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58689b56
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 0B: jmp 0x58689b6f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 0F: jmp 0x58689b86
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 B6 12 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb6
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 85 10 03 00 00: jne 0x58689ebf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 70h]
        ; Exact mapped bytes 0F 85 FE 02 00 00: jne 0x58689ebf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 0F 85 96 01 00 00: jne 0x58689d72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 5D 96 58 00: cmp dword ptr [0x58965d40], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 45: jne 0x58689c2a
        __asm _emit 0x75
        __asm _emit 0x45
        mov dword ptr [ebp - 7ch], 0c8h
        mov dword ptr [ebp - 78h], 0
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 AE DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xae
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        push ecx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 A0 3F EE FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3f
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 40 5D 96 58 01 00 00 00: mov dword ptr [0x58965d40], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 78 24 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 2b2h
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58689ce7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 5F 24 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 2b2h
        sub ecx, eax
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], -8
        ; Exact mapped bytes 7E 58: jle 0x58689cb9
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 10h], 8
        ; Exact mapped bytes 7D 52: jge 0x58689cb9
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 10h], -4
        ; Exact mapped bytes 7E 39: jle 0x58689ca6
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 7D 33: jge 0x58689ca6
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 09: jge 0x58689c82
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 40h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58689c9e
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7E 09: jle 0x58689c91
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58689c98
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 0B: jmp 0x58689cb1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x58689cc8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        mov dword ptr [ebp - 64h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CA B5 12 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb5
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 BB 23 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x23
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 2b2h
        ; Exact mapped bytes 75 71: jne 0x58689d6d
        __asm _emit 0x75
        __asm _emit 0x71
        mov dword ptr [ebp - 84h], 0c8h
        mov dword ptr [ebp - 80h], 0
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 AD DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xad
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 84h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 83 3E EE FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3e
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C8 02: or ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc8
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x58689ebf
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 32 01 00 00: jne 0x58689ebf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffdh
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 FF 22 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 302h
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x58689e60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 E6 22 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, 302h
        sub edx, eax
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], -8
        ; Exact mapped bytes 7E 58: jle 0x58689e32
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 14h], 8
        ; Exact mapped bytes 7D 52: jge 0x58689e32
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 14h], -4
        ; Exact mapped bytes 7E 39: jle 0x58689e1f
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 4
        ; Exact mapped bytes 7D 33: jge 0x58689e1f
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 09: jge 0x58689dfb
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 50h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x58689e17
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 09: jle 0x58689e0a
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 4ch], 1
        ; Exact mapped bytes EB 07: jmp 0x58689e11
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4ch], 0
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 54h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x58689e2a
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 54h], eax
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], edx
        ; Exact mapped bytes EB 0F: jmp 0x58689e41
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 14h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f8h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 51 B4 12 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb4
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 42 22 E0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 302h
        ; Exact mapped bytes 75 4A: jne 0x58689ebf
        __asm _emit 0x75
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0fffbh
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
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffeh
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
        ; Exact mapped bytes EB 33: jmp 0x58689ef4
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 75 1C: jne 0x58689ef4
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 CA 02: or dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x02
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes C7 05 40 5D 96 58 00 00 00 00: mov dword ptr [0x58965d40], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x5d
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x58689f15
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x58689f15
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 5A: je 0x58689f7e
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58689f38
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB E6: jmp 0x58689f1e
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D0 B6 E0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x58689f5c
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x58689f7e
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x58689f7c
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC B6 E0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 74h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB A0: jmp 0x58689f1e
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
