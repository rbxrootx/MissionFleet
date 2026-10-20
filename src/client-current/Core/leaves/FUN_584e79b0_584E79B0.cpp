// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E79B0 .. +0x582 bytes.
extern "C" __declspec(naked) void FUN_584e79b0_584E79B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
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
        ; Exact mapped bytes 0F 84 5D 05 00 00: je 0x584e7f30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5d
        __asm _emit 0x05
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
        ; Exact mapped bytes 74 33: je 0x584e7a1d
        __asm _emit 0x74
        __asm _emit 0x33
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
        ; Exact mapped bytes 74 1C: je 0x584e7a1d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 40000000h
        ; Exact mapped bytes 74 10: je 0x584e7a1d
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 40000000h
        ; Exact mapped bytes 0F 85 82 04 00 00: jne 0x584e7e9f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 75 12: jne 0x584e7a3d
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x584e7c1d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 68h]
        sub ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 2
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x584e7b53
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x584e7ac6
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x584e7ac6
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x584e7ab3
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x584e7ab3
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x584e7a8f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584e7aab
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x584e7a9e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x584e7aa5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584e7abe
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584e7ad5
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], -8
        ; Exact mapped bytes 7E 58: jle 0x584e7b39
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x584e7b39
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x584e7b26
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x584e7b26
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x584e7b02
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584e7b1e
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x584e7b11
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x584e7b18
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x584e7b31
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 0F: jmp 0x584e7b48
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x584e7c0c
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 64h], 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x584e7c0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 24: jle 0x584e7b8a
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes 7C 0B: jl 0x584e7b7c
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 06: jmp 0x584e7b82
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 26: jmp 0x584e7bb0
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 7F 0D: jg 0x584e7ba4
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        neg eax
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 06: jmp 0x584e7baa
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 24: jle 0x584e7be0
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 60h]
        ; Exact mapped bytes 7C 0B: jl 0x584e7bd2
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 06: jmp 0x584e7bd8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes EB 26: jmp 0x584e7c06
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        neg edx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7F 0D: jg 0x584e7bfa
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        mov dword ptr [ebp - 44h], ecx
        ; Exact mapped bytes EB 06: jmp 0x584e7c00
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 D5 2C 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd5
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x584e7cc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 7E 44: jle 0x584e7c81
        __asm _emit 0x7e
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        sub eax, dword ptr [edx + 28h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 7F 12: jg 0x584e7c66
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD D8 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e7c7f
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 80h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C2 D8 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 42: jmp 0x584e7cc3
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 7F 12: jg 0x584e7caa
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 99 D8 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e7cc3
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7E D8 2C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 78h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x584e7d69
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 78h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 7E 44: jle 0x584e7d27
        __asm _emit 0x7e
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 78h]
        sub eax, dword ptr [edx + 2ch]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 7F 12: jg 0x584e7d0c
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 D8 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e7d25
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2ch]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 80h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C D8 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 42: jmp 0x584e7d69
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 7F 12: jg 0x584e7d50
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 63 D8 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584e7d69
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 80h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 D8 2C 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd8
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x584e7e9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 6ch]
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x584e7e9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 7ch]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x584e7e9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 78h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x584e7e9d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x584e7dc7
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x584e7ddd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], 0
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
        ; Exact mapped bytes 75 32: jne 0x584e7e26
        __asm _emit 0x75
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 77: jmp 0x584e7e9d
        __asm _emit 0xeb
        __asm _emit 0x77
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
        ; Exact mapped bytes 75 60: jne 0x584e7e9d
        __asm _emit 0x75
        __asm _emit 0x60
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
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0fffbh
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
        mov eax, 0fffeh
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
        ; Exact mapped bytes EB 07: jmp 0x584e7ea6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584e7ec7
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584e7ec7
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x584e7f30
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584e7eea
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x584e7ed0
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E D7 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584e7f0e
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
        ; Exact mapped bytes EB 24: jmp 0x584e7f30
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584e7f2e
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FA D6 FA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB A0: jmp 0x584e7ed0
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
