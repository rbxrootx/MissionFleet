// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5859B840 .. +0x11B9 bytes.
extern "C" __declspec(naked) void FUN_5859b840_5859B840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14ch
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
        ; Exact mapped bytes 0F 84 91 11 00 00: je 0x5859c9f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x11
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
        ; Exact mapped bytes 74 1B: je 0x5859b898
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
        ; Exact mapped bytes 0F 85 C4 03 00 00: jne 0x5859bc5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x5859b939
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        sub edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], -8
        ; Exact mapped bytes 7E 58: jle 0x5859b917
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 18h], 8
        ; Exact mapped bytes 7D 52: jge 0x5859b917
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 18h], -4
        ; Exact mapped bytes 7E 39: jle 0x5859b904
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 18h], 4
        ; Exact mapped bytes 7D 33: jge 0x5859b904
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 09: jge 0x5859b8e0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 5ch], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x5859b8fc
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7E 09: jle 0x5859b8ef
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 58h], 1
        ; Exact mapped bytes EB 07: jmp 0x5859b8f6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 58h], 0
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 60h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x5859b90f
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 60h], eax
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 64h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5859b926
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 18h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 99 21 00: call 0x587b52b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x99
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 74 7C: je 0x5859b9c3
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x5859b98d
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        sub ecx, dword ptr [eax + 2ch]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5859b978
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3B 9C 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5859b98b
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 9C 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5859b9c3
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 2ch]
        sub edx, dword ptr [ecx + 5ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5859b9b0
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 03 9C 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5859b9c3
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE 9B 21 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 74 7C: je 0x5859ba4d
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 7E 38: jle 0x5859ba17
        __asm _emit 0x7e
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        sub eax, dword ptr [edx + 28h]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x5859ba02
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 9B 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5859ba15
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2C 9B 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x5859ba4d
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 28h]
        sub ecx, dword ptr [eax + 58h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x5859ba3a
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 9B 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x9b
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x5859ba4d
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        sub edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 9A 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x9a
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 54h]
        ; Exact mapped bytes 0F 85 FD 01 00 00: jne 0x5859bc5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 0F 85 EB 01 00 00: jne 0x5859bc5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 0F 85 D9 01 00 00: jne 0x5859bc5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5859bb34
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes A1 3C 06 96 58: mov eax, dword ptr [0x5896063c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 10000h
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 80 34 13 00: call 0x586cef70
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 26 13 00: call 0x586ce130
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x26
        __asm _emit 0x13
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 788h], 64h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 C0 FF FF: call 0x58597b90
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4f8h]
        mov dword ptr [ebp - 6ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 BA A3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 BD FF FF: call 0x58597870
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x5859bc5c
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
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
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x5859bc5c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859bb61
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 1
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 2
        ; Exact mapped bytes 7D 1D: jge 0x5859bb84
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 798h]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 5F A3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D4: jmp 0x5859bb58
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7a0h]
        mov dword ptr [ebp - 74h], eax
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 46 A3 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
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
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE A3 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xa3
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 60h], 0
        ; Exact mapped bytes 74 6C: je 0x5859bc38
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 60h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 8B 15 F8 1F 96 58: mov edx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp edx, dword ptr [ecx + 60h]
        ; Exact mapped bytes 75 0A: jne 0x5859bbf8
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F8 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 35 90 58 00: cmp dword ptr [0x58903564], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 37: je 0x5859bc38
        __asm _emit 0x74
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 54h], ecx
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 17: je 0x5859bc27
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 54h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 78h], ecx
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 55 88: call dword ptr [ebp - 0x78]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x88
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5859bc2e
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 7ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 B5 FF FF: call 0x58597200
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 0C 06 96 58: cmp eax, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0E: jne 0x5859bc5c
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes 8B 0D 3C 06 96 58: mov ecx, dword ptr [0x5896063c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 A1 EE FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        nop
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
        ; Exact mapped bytes 0F 85 BF 0C 00 00: jne 0x5859c936
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 508h]
        ; Exact mapped bytes E8 0B 9C EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x9c
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 53 02 00 00: je 0x5859bee3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 78ch]
        ; Exact mapped bytes E8 E9 9B EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x5859bd55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859bcc5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 0F 8D 86 00 00 00: jge 0x5859bd55
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78ch]
        mov dword ptr [ebp - 80h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 54 98 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78ch]
        mov dword ptr [ebp - 84h], ecx
        push 0
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 D4 A1 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 88h], ecx
        push 100h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 11 98 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x98
        __asm _emit 0x21
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 8ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 91 A1 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa1
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5859bcbc
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 588h]
        mov eax, 4
        imul ecx, eax, 0
        mov ecx, dword ptr [edx + ecx]
        ; Exact mapped bytes E8 59 A2 F2 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xa2
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 57ch], 0
        ; Exact mapped bytes 74 3C: je 0x5859bdc4
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 10h], 0dch
        ; Exact mapped bytes 7E 0B: jle 0x5859bd9c
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 2
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5859bda5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 0ah
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 100h
        ; Exact mapped bytes 7E 14: jle 0x5859bdc2
        __asm _emit 0x7e
        __asm _emit 0x14
        mov dword ptr [ebp - 10h], 100h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 57ch], 0
        ; Exact mapped bytes EB 37: jmp 0x5859bdfb
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 10h], 0dch
        ; Exact mapped bytes 7E 0B: jle 0x5859bdd8
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 2
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5859bde1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        sub edx, 0ah
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 14: jge 0x5859bdfb
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 57ch], 1
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859be0d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2
        ; Exact mapped bytes 0F 8D C7 00 00 00: jge 0x5859bede
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859be29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 0F 8D A6 00 00 00: jge 0x5859bed9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 588h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 90h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 E5 96 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 598h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 94h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BD 96 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 5a8h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 95 96 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 5b8h]
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 6D 96 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x96
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x5859be20
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x5859be04
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 06 00 00: jmp 0x5859c525
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a00h]
        ; Exact mapped bytes E8 9F 99 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x99
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x5859bfcc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 78ch]
        ; Exact mapped bytes E8 7D 99 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x99
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5859bfc7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859bf31
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 2ch]
        add eax, 1
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 2
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x5859bfc7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78ch]
        mov dword ptr [ebp - 0a0h], eax
        push 100h
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 E2 95 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 78ch]
        mov dword ptr [ebp - 0a4h], eax
        push 0
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 62 9F EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 580h]
        mov dword ptr [ebp - 0a8h], eax
        push 100h
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 9F 95 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x95
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 580h]
        mov dword ptr [ebp - 0ach], eax
        push 0
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 1F 9F EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x9f
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x5859bf28
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 59 05 00 00: jmp 0x5859c525
        __asm _emit 0xe9
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a06h]
        cmp edx, 10h
        ; Exact mapped bytes 74 22: je 0x5859bffd
        __asm _emit 0x74
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0a06h]
        cmp ecx, 15h
        ; Exact mapped bytes 74 13: je 0x5859bffd
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        cmp eax, 16h
        ; Exact mapped bytes 0F 85 E6 03 00 00: jne 0x5859c3e3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78ch]
        ; Exact mapped bytes E8 7C 98 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x98
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 5B: jne 0x5859c076
        __asm _emit 0x75
        __asm _emit 0x5b
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c02d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 43: jge 0x5859c076
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78ch]
        mov dword ptr [ebp - 0b0h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 8D 9E EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 580h]
        mov dword ptr [ebp - 0b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 6D 9E EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x9e
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AE: jmp 0x5859c024
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 798h]
        ; Exact mapped bytes E8 03 98 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x98
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 85 70 01 00 00: jne 0x5859c208
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 66 D5 F4 FF: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xd5
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 0B: jmp 0x5859c0ba
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 F9 FF EE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 34: je 0x5859c0f4
        __asm _emit 0x74
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 18 FE EE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A1 3B F1 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3b
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7E 18: jle 0x5859c0f2
        __asm _emit 0x7e
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 FE FD EE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xfd
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 87 3B F1 FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x3b
        __asm _emit 0xf1
        __asm _emit 0xff
        movzx edx, al
        xor edx, 55h
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB BB: jmp 0x5859c0af
        __asm _emit 0xeb
        __asm _emit 0xbb
        cmp dword ptr [ebp - 3ch], 5
        ; Exact mapped bytes 0F 8E B2 00 00 00: jle 0x5859c1b0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0ch
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x5859c1b0
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c11a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 71: jge 0x5859c191
        __asm _emit 0x7d
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 798h]
        mov dword ptr [ebp - 0c0h], eax
        ; Exact mapped bytes 8B 0D 6C 79 94 58: mov ecx, dword ptr [0x5894796c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 B9 FF FF: call 0x58597a70
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 CA 89 EE FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x89
        __asm _emit 0xee
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        mov edx, dword ptr [ebp - 0bch]
        push edx
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 C2 9D EE FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 798h]
        mov dword ptr [ebp - 0c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 52 9D EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 80: jmp 0x5859c111
        __asm _emit 0xeb
        __asm _emit 0x80
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7a0h]
        mov dword ptr [ebp - 0c8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 33 9D EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9d
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x5859c208
        __asm _emit 0xeb
        __asm _emit 0x58
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c1c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x5859c1eb
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 798h]
        mov dword ptr [ebp - 0cch], edx
        push 0
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 F8 9C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5859c1b9
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7a0h]
        mov dword ptr [ebp - 0d0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 D9 9C EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9c
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 78ch]
        ; Exact mapped bytes E8 B1 9D F2 FF: call 0x584c5fd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 794h], 0
        ; Exact mapped bytes 74 3C: je 0x5859c26c
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp dword ptr [ebp - 14h], 0dch
        ; Exact mapped bytes 7E 0B: jle 0x5859c244
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 2
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5859c24d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 0ah
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 100h
        ; Exact mapped bytes 7E 14: jle 0x5859c26a
        __asm _emit 0x7e
        __asm _emit 0x14
        mov dword ptr [ebp - 14h], 100h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 794h], 0
        ; Exact mapped bytes EB 37: jmp 0x5859c2a3
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 14h], 0dch
        ; Exact mapped bytes 7E 0B: jle 0x5859c280
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 2
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 09: jmp 0x5859c289
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        sub edx, 0ah
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7D 14: jge 0x5859c2a3
        __asm _emit 0x7d
        __asm _emit 0x14
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 794h], 1
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c2b5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 1F 01 00 00: jge 0x5859c3de
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        cmp dword ptr [eax*4 + 58948c60h], 0
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x5859c394
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0a06h]
        mov eax, dword ptr [edx*4 + 58948c60h]
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 4
        ; Exact mapped bytes 74 19: je 0x5859c30a
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        mov ecx, dword ptr [eax*4 + 58948c60h]
        movzx edx, word ptr [ecx + 2]
        test edx, edx
        ; Exact mapped bytes 75 47: jne 0x5859c351
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78ch]
        mov dword ptr [ebp - 0d4h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E8 14 92 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x92
        __asm _emit 0x21
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 580h]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E8 F2 91 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 41: jmp 0x5859c392
        __asm _emit 0xeb
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78ch]
        mov dword ptr [ebp - 0dch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E8 6F 9B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x9b
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 580h]
        mov dword ptr [ebp - 0e0h], ecx
        push 0
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes E8 4F 9B EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9b
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 45: jmp 0x5859c3d9
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 78ch]
        mov dword ptr [ebp - 0e4h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes E8 8A 91 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 580h]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 68 91 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x91
        __asm _emit 0x21
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CE FE FF FF: jmp 0x5859c2ac
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x5859c525
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 78ch]
        ; Exact mapped bytes E8 96 94 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0xef
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x5859c4ae
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c418
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 30h]
        add edx, 1
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 2
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x5859c4ae
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78ch]
        mov dword ptr [ebp - 0ech], edx
        push 100h
        mov ecx, dword ptr [ebp - 0ech]
        ; Exact mapped bytes E8 FB 90 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 78ch]
        mov dword ptr [ebp - 0f0h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f0h]
        ; Exact mapped bytes E8 7B 9A EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 580h]
        mov dword ptr [ebp - 0f4h], edx
        push 100h
        mov ecx, dword ptr [ebp - 0f4h]
        ; Exact mapped bytes E8 B8 90 21 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0x21
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 580h]
        mov dword ptr [ebp - 0f8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0f8h]
        ; Exact mapped bytes E8 38 9A EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x5859c40f
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 798h]
        ; Exact mapped bytes E8 CB 93 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x93
        __asm _emit 0xef
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 58: jne 0x5859c525
        __asm _emit 0x75
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c4df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 40h]
        add ecx, 1
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 2
        ; Exact mapped bytes 7D 23: jge 0x5859c508
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 798h]
        mov dword ptr [ebp - 0fch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 DB 99 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5859c4d6
        __asm _emit 0xeb
        __asm _emit 0xce
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7a0h]
        mov dword ptr [ebp - 100h], eax
        push 0
        mov ecx, dword ptr [ebp - 100h]
        ; Exact mapped bytes E8 BC 99 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c537
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 9
        ; Exact mapped bytes 0F 8D 11 03 00 00: jge 0x5859c852
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 0ch], 0e84h
        cmp dword ptr [edx + 588f4f74h], 0
        ; Exact mapped bytes 0F 84 F8 02 00 00: je 0x5859c84d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 0ch], 0e84h
        movzx ecx, byte ptr [eax + 588f4fb4h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 87 01 00 00: jne 0x5859c6fc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 64h
        ; Exact mapped bytes 0F 84 72 01 00 00: je 0x5859c6f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 F7 92 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x92
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 53 01 00 00: jne 0x5859c6f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 104h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 CA 99 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f8h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 108h], ecx
        push 1
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 F8 98 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 10ch], edx
        push 1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 D6 98 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7fch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 110h], eax
        push 0
        mov ecx, dword ptr [ebp - 110h]
        ; Exact mapped bytes E8 14 32 F0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x32
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 800h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 114h], ecx
        push 1
        mov ecx, dword ptr [ebp - 114h]
        ; Exact mapped bytes E8 92 98 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c661
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        add edx, 1
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 4
        ; Exact mapped bytes 7D 4B: jge 0x5859c6b2
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c679
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 48h]
        add eax, 1
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 2
        ; Exact mapped bytes 7D 31: jge 0x5859c6b0
        __asm _emit 0x7d
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 804h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 118h]
        ; Exact mapped bytes E8 33 98 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x5859c670
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB A6: jmp 0x5859c658
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 808h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 11ch], eax
        push 1
        mov ecx, dword ptr [ebp - 11ch]
        ; Exact mapped bytes E8 0C 98 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80ch]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 120h], ecx
        push 1
        mov ecx, dword ptr [ebp - 120h]
        ; Exact mapped bytes E8 EA 97 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 51 01 00 00: jmp 0x5859c84d
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7f4h]
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + ecx*4]
        ; Exact mapped bytes E8 80 91 EF FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x91
        __asm _emit 0xef
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 0F 85 31 01 00 00: jne 0x5859c84d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7f4h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 124h], eax
        push 0
        mov ecx, dword ptr [ebp - 124h]
        ; Exact mapped bytes E8 52 98 EE FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7f8h]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 128h], ecx
        push 0
        mov ecx, dword ptr [ebp - 128h]
        ; Exact mapped bytes E8 80 97 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7fch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 12ch], edx
        push 0
        mov ecx, dword ptr [ebp - 12ch]
        ; Exact mapped bytes E8 5E 97 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 800h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 130h], eax
        push 0
        mov ecx, dword ptr [ebp - 130h]
        ; Exact mapped bytes E8 3C 97 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c7b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        add ecx, 1
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 4
        ; Exact mapped bytes 7D 4B: jge 0x5859c808
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov dword ptr [ebp - 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x5859c7cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 50h]
        add edx, 1
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 2
        ; Exact mapped bytes 7D 31: jge 0x5859c806
        __asm _emit 0x7d
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 804h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [eax + ecx*4]
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 134h], ecx
        push 0
        mov ecx, dword ptr [ebp - 134h]
        ; Exact mapped bytes E8 DD 96 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C0: jmp 0x5859c7c6
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes EB A6: jmp 0x5859c7ae
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 808h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 138h], edx
        push 0
        mov ecx, dword ptr [ebp - 138h]
        ; Exact mapped bytes E8 B6 96 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80ch]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 13ch], eax
        push 0
        mov ecx, dword ptr [ebp - 13ch]
        ; Exact mapped bytes E8 94 96 EE FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 DC FC FF FF: jmp 0x5859c52e
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 780h], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5859c901
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 788h]
        mov dword ptr [ebp - 140h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 784h]
        mov dword ptr [ebp - 144h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 788h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 788h], ecx
        mov eax, dword ptr [ebp - 140h]
        cmp eax, dword ptr [ebp - 144h]
        ; Exact mapped bytes 72 5E: jb 0x5859c901
        __asm _emit 0x72
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0fch], 64h
        ; Exact mapped bytes 75 09: jne 0x5859c8b8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 68h], 1
        ; Exact mapped bytes EB 07: jmp 0x5859c8bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 148h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 788h], 0
        ; Exact mapped bytes 83 3D 94 75 94 58 00: cmp dword ptr [0x58947594], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x5859c901
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 148h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0a06h]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 1E FE FF: call 0x5857e720
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0f8h], 40000000h
        ; Exact mapped bytes 75 1B: jne 0x5859c92b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 504h]
        ; Exact mapped bytes E8 62 80 EE FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x80
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5859c92b
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 7A FF FF: call 0x58594350
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD C0 FF FF: call 0x58598a30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x5859c967
        __asm _emit 0xeb
        __asm _emit 0x31
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
        cmp edx, 0dh
        ; Exact mapped bytes 75 1A: jne 0x5859c967
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ac0h], 64h
        ; Exact mapped bytes 75 0E: jne 0x5859c967
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5859c988
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5859c988
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 60: je 0x5859c9f7
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5859c9ab
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB E6: jmp 0x5859c991
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5D 8C EF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5859c9cf
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 2A: jmp 0x5859c9f7
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 26: jmp 0x5859c9f5
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 39 8C EF FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x8c
        __asm _emit 0xef
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 14ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 9A: jmp 0x5859c991
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov esp, ebp
    }
}
