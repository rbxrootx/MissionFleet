// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586B77C0 .. +0x729 bytes.
extern "C" __declspec(naked) void FUN_586b77c0_586B77C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0c8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 6ch], ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 80 FE FF FF: call 0x586b7660
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1ch
        push 0
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 23 56 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x56
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b7802
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 78h]
        add ecx, 1
        mov dword ptr [ebp - 78h], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [ebp - 78h]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 0F 8D F3 00 00 00: jge 0x586b7907
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 F9 E1 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf9
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 6D: jne 0x586b7898
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 6ch]
        movzx eax, byte ptr [edx + 100h]
        test eax, eax
        ; Exact mapped bytes 75 5F: jne 0x586b7898
        __asm _emit 0x75
        __asm _emit 0x5f
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ebp - 6ch]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 84h], eax
        push 0ffh
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 49 DE 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ebp - 6ch]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 88h], edx
        push 112h
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 1B DE 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 6A: jmp 0x586b7902
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + 180h]
        push ecx
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 E5 DD 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [ebp - 6ch]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 90h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + 180h]
        add edx, 0ah
        push edx
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes E8 AF DD 0F 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xdd
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 F2 FE FF FF: jmp 0x586b77f9
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E F8 E1 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 75 53: jne 0x586b7971
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 6ch]
        movzx edx, byte ptr [ecx + 100h]
        test edx, edx
        ; Exact mapped bytes 75 45: jne 0x586b7971
        __asm _emit 0x75
        __asm _emit 0x45
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b793e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp - 78h]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 7D 23: jge 0x586b796f
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 94h], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 74 E5 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C6: jmp 0x586b7935
        __asm _emit 0xeb
        __asm _emit 0xc6
        ; Exact mapped bytes EB 43: jmp 0x586b79b4
        __asm _emit 0xeb
        __asm _emit 0x43
        mov dword ptr [ebp - 78h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b7983
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 78h]
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp - 78h]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 7D 23: jge 0x586b79b4
        __asm _emit 0x7d
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 98h], edx
        push 0
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 2F E5 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe5
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C6: jmp 0x586b797a
        __asm _emit 0xeb
        __asm _emit 0xc6
        mov edi, dword ptr [ebp - 6ch]
        add edi, 88h
        mov ecx, 12h
        mov esi, dword ptr [ebp + 0ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0d0h], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0d4h], eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ecx + 0d8h], edx
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [eax + 0dch], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edx + 0e0h], eax
        push 48h
        push 0
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 00 54 19 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x54
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 74h], 0
        ; Exact mapped bytes EB 09: jmp 0x586b7a25
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 74h]
        add edx, 1
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0ah
        ; Exact mapped bytes 0F 8D DC 03 00 00: jge 0x586b7e0b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 74h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 C5 C3 FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, dword ptr [ebp - 74h]
        movzx edx, byte ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 70h]
        movzx ecx, byte ptr [ebp + eax - 68h]
        add ecx, edx
        mov edx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + edx - 68h], cl
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 70h]
        mov dl, byte ptr [ebp + ecx - 5eh]
        mov byte ptr [ebp + eax - 5eh], dl
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B F7 E1 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf7
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 10h
        ; Exact mapped bytes 0F 85 A3 00 00 00: jne 0x586b7b28
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 6ch]
        movzx edx, byte ptr [ecx + 100h]
        test edx, edx
        ; Exact mapped bytes 75 3E: jne 0x586b7ad1
        __asm _emit 0x75
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 74h]
        movzx ecx, byte ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 70h]
        movzx eax, byte ptr [ebp + edx - 54h]
        add eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + ecx - 54h], al
        mov edx, dword ptr [ebp - 6ch]
        add edx, dword ptr [ebp - 74h]
        movzx eax, byte ptr [edx + 92h]
        mov ecx, dword ptr [ebp - 70h]
        movzx edx, byte ptr [ebp + ecx - 5eh]
        add edx, eax
        mov eax, dword ptr [ebp - 70h]
        mov byte ptr [ebp + eax - 5eh], dl
        ; Exact mapped bytes EB 57: jmp 0x586b7b28
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, dword ptr [ebp - 74h]
        movzx edx, byte ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 74h]
        movzx ecx, byte ptr [eax + 92h]
        add edx, ecx
        mov eax, dword ptr [ebp - 70h]
        movzx ecx, byte ptr [ebp + eax - 68h]
        add ecx, edx
        mov edx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + edx - 68h], cl
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 74h]
        mov byte ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, dword ptr [ebp - 74h]
        mov byte ptr [ecx + 92h], 0
        mov edx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + edx - 54h], 0
        mov eax, dword ptr [ebp - 70h]
        mov byte ptr [ebp + eax - 5eh], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D F6 E1 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 1
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x586b7c5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 95 EA FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA CE DC FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xce
        __asm _emit 0xdc
        __asm _emit 0xff
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 0F 86 FD 00 00 00: jbe 0x586b7c5d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f4241h
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 95 EA FF: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x95
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes E8 BB FA FF FF: call 0x586b7640
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        mov eax, dword ptr [ebp - 80h]
        add eax, dword ptr [ebp - 74h]
        movzx ecx, byte ptr [eax]
        mov edx, dword ptr [ebp - 70h]
        movzx eax, byte ptr [ebp + edx - 68h]
        add eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + ecx - 68h], al
        mov edx, dword ptr [ebp - 80h]
        add edx, dword ptr [ebp - 74h]
        movzx eax, byte ptr [edx + 0ah]
        mov ecx, dword ptr [ebp - 70h]
        movzx edx, byte ptr [ebp + ecx - 5eh]
        add edx, eax
        mov eax, dword ptr [ebp - 70h]
        mov byte ptr [ebp + eax - 5eh], dl
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E8 F5 E1 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 10h
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x586b7c5d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        movzx eax, byte ptr [edx + 100h]
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x586b7c06
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        add ecx, dword ptr [ebp - 74h]
        movzx edx, byte ptr [ecx + 9ch]
        mov eax, dword ptr [ebp - 70h]
        movzx ecx, byte ptr [ebp + eax - 54h]
        add ecx, edx
        mov edx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + edx - 54h], cl
        ; Exact mapped bytes EB 57: jmp 0x586b7c5d
        __asm _emit 0xeb
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 74h]
        movzx ecx, byte ptr [eax + 9ch]
        mov edx, dword ptr [ebp - 6ch]
        add edx, dword ptr [ebp - 74h]
        movzx eax, byte ptr [edx + 92h]
        add ecx, eax
        mov edx, dword ptr [ebp - 70h]
        movzx eax, byte ptr [ebp + edx - 68h]
        add eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + ecx - 68h], al
        mov edx, dword ptr [ebp - 6ch]
        add edx, dword ptr [ebp - 74h]
        mov byte ptr [edx + 9ch], 0
        mov eax, dword ptr [ebp - 6ch]
        add eax, dword ptr [ebp - 74h]
        mov byte ptr [eax + 92h], 0
        mov ecx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + ecx - 54h], 0
        mov edx, dword ptr [ebp - 70h]
        mov byte ptr [ebp + edx - 5eh], 0
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0a0h], edx
        mov eax, dword ptr [ebp - 70h]
        movzx ecx, byte ptr [ebp + eax - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 01 35 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [ebp - 70h]
        movzx eax, byte ptr [ebp + edx - 54h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 DA 34 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 70h]
        movzx edx, byte ptr [ebp + ecx - 54h]
        test edx, edx
        ; Exact mapped bytes 74 23: je 0x586b7ce6
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 0a8h], edx
        push 0
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 CD D8 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 21: jmp 0x586b7d07
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx + eax*4 + 0e4h]
        mov dword ptr [ebp - 0ach], edx
        push -64h
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 AA D8 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0b0h], ecx
        mov edx, dword ptr [ebp - 70h]
        movzx eax, byte ptr [ebp + edx - 5eh]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes E8 57 34 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 70h]
        movzx edx, byte ptr [ebp + ecx - 68h]
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x586b7d74
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0b4h], edx
        push 0
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes E8 3F D8 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x586b7da0
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0b8h], edx
        push -64h
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes E8 11 D8 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 70h]
        movzx ecx, byte ptr [ebp + eax - 5eh]
        test ecx, ecx
        ; Exact mapped bytes 74 2E: je 0x586b7dda
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [ebp - 6ch]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 0bch], eax
        push 0
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes E8 D9 D7 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x586b7e06
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ebp - 6ch]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 0c0h], edx
        push -64h
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes E8 AB D7 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 11 FC FF FF: jmp 0x586b7a1c
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x586b7ed7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 EB DC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xeb
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 19 46 DD FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x46
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B2 CB DC FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xcb
        __asm _emit 0xdc
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
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 BE BF FF FF: call 0x586b3e00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 7ch]
        movzx eax, byte ptr [ebp + edx - 68h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 7ch]
        mov byte ptr [ebp + ecx - 68h], al
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [ebp - 6ch]
        lea ecx, [eax + edx*8 + 104h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 7ch]
        movzx eax, byte ptr [ebp + edx - 68h]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 07 33 10 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ebp - 6ch]
        lea eax, [edx + ecx*8 + 104h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [eax + edx]
        ; Exact mapped bytes E8 09 D9 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd9
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x586b7ed7
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 7ch]
        mov ecx, dword ptr [ebp - 6ch]
        lea edx, [ecx + eax*8 + 104h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0c8h], edx
        push -64h
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E8 DA D6 0F 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xd6
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6D 91 17 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x91
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
