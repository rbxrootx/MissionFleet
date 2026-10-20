// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5861F840 .. +0x675 bytes.
extern "C" __declspec(naked) void FUN_5861f840_5861F840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
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
        ; Exact mapped bytes 0F 84 50 06 00 00: je 0x5861feb3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x06
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
        ; Exact mapped bytes 74 1B: je 0x5861f895
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
        ; Exact mapped bytes 0F 85 F3 04 00 00: jne 0x5861fd88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 75 12: jne 0x5861f8b5
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x5861f9ca
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 50h]
        sub edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x5861f931
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x5861f931
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x5861f91e
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x5861f91e
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x5861f8fa
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5861f916
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x5861f909
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 1
        ; Exact mapped bytes EB 07: jmp 0x5861f910
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5861f929
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x5861f940
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x5861f9a4
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x5861f9a4
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x5861f991
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x5861f991
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x5861f96d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 34h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5861f989
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x5861f97c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 30h], 1
        ; Exact mapped bytes EB 07: jmp 0x5861f983
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 0B: jmp 0x5861f99c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x5861f9b3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 58 19 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x58
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 74 7C: je 0x5861fa54
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x5861fa1e
        __asm _emit 0x7e
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [edx + 2ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5861fa09
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AA 5B 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5861fa1c
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 5B 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5861fa54
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2ch]
        sub ecx, dword ptr [eax + 5ch]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5861fa41
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 5B 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5861fa54
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        sub edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D 5B 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x5b
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 74 7C: je 0x5861fade
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 7E 38: jle 0x5861faa8
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        sub edx, dword ptr [ecx + 28h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5861fa93
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 5A 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5861faa6
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B 5A 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5861fade
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 58h]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5861facb
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 5A 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5861fade
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 5A 19 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes 0F 85 93 02 00 00: jne 0x5861fd83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes 0F 85 81 02 00 00: jne 0x5861fd83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 85 6F 02 00 00: jne 0x5861fd83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 0F 85 5D 02 00 00: jne 0x5861fd83
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x02
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
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 C1 01 00 00: jne 0x5861fd02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c64h]
        mov dword ptr [ebp - 44h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 4D 5A 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c6ch]
        mov dword ptr [ebp - 48h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 2B 5A 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c6ch]
        mov dword ptr [ebp - 4ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 09 5A 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5a
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 200h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
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
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0c74h]
        ; Exact mapped bytes E8 1B 09 EB FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c74h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 E5 62 E6 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x62
        __asm _emit 0xe6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c74h]
        mov dword ptr [ebp - 54h], edx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 CF 61 E6 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x61
        __asm _emit 0xe6
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 98 0C 00 00: movsx ecx, word ptr [eax + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 99 00 00 00: jle 0x5861fcbd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5861fc3d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 80h
        ; Exact mapped bytes 7D 77: jge 0x5861fcbd
        __asm _emit 0x7d
        __asm _emit 0x77
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 96 E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        imul eax, dword ptr [ebp - 14h], 18h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 64h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 98 8B 04 00: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 25: jne 0x5861fc96
        __asm _emit 0x75
        __asm _emit 0x25
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 96 E9 FF: call 0x584b92a0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0xe9
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        imul eax, dword ptr [ebp - 14h], 18h
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 64h]
        push edx
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 0D 8B 04 00: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 32 4A EA FF: call 0x584c46d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4a
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 98 0C 00 00: movsx edx, word ptr [ecx + 0xc98]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes 75 02: jne 0x5861fcb8
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x5861fcbd
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x5861fc34
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 78 4D E6 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4d
        __asm _emit 0xe6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 60h], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 55 A0: call dword ptr [ebp - 0x60]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xa0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c9ch], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 1
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5861fd83
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
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
        cmp eax, 4
        ; Exact mapped bytes 75 6A: jne 0x5861fd83
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 500h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffdh
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
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], 0
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x5861fe29
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
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
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5861fe29
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0c64h]
        ; Exact mapped bytes E8 56 98 F0 FF: call 0x58529610
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x98
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp dword ptr [eax], 0fffffeffh
        ; Exact mapped bytes 74 67: je 0x5861fe29
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0c64h]
        mov dword ptr [ebp - 64h], edx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 CC 57 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x57
        __asm _emit 0x19
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c6ch]
        mov dword ptr [ebp - 68h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 AA 57 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x57
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0c6ch]
        mov dword ptr [ebp - 6ch], eax
        push 101h
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 88 57 19 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x57
        __asm _emit 0x19
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5861fe4a
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5861fe4a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x5861feb3
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5861fe6d
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x5861fe53
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 57 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5861fe91
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x5861feb3
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5861feb1
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 57 E7 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x5861fe53
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
