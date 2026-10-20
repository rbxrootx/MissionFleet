// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D85A0 .. +0x3BF bytes.
extern "C" __declspec(naked) void FUN_584d85a0_584D85A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
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
        ; Exact mapped bytes 0F 84 9A 03 00 00: je 0x584d895d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x03
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
        ; Exact mapped bytes 74 1B: je 0x584d85f5
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
        ; Exact mapped bytes 0F 85 01 02 00 00: jne 0x584d87f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 74 7C: je 0x584d867f
        __asm _emit 0x74
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        cmp edx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes 7E 38: jle 0x584d8649
        __asm _emit 0x7e
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 5ch]
        sub edx, dword ptr [ecx + 2ch]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x584d8634
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F CF 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xcf
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x584d8647
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A CF 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xcf
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x584d867f
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 2ch]
        sub eax, dword ptr [edx + 5ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 12: jg 0x584d866c
        __asm _emit 0x7f
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 CF 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xcf
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x584d867f
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 32 CF 2D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 74 7C: je 0x584d8709
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 7E 38: jle 0x584d86d3
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 58h]
        sub ecx, dword ptr [eax + 28h]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 12: jg 0x584d86be
        __asm _emit 0x7f
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 85 CE 2D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x584d86d1
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        add edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 CE 2D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 36: jmp 0x584d8709
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 58h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 12: jg 0x584d86f6
        __asm _emit 0x7f
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4D CE 2D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 13: jmp 0x584d8709
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        sub eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 CE 2D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xce
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        cmp eax, dword ptr [edx + 28h]
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x584d87f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x584d87f1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
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
        cmp eax, 1
        ; Exact mapped bytes 75 32: jne 0x584d8776
        __asm _emit 0x75
        __asm _emit 0x32
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
        ; Exact mapped bytes EB 7B: jmp 0x584d87f1
        __asm _emit 0xeb
        __asm _emit 0x7b
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
        ; Exact mapped bytes 75 64: jne 0x584d87f1
        __asm _emit 0x75
        __asm _emit 0x64
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
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 02: shr ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 C1 E0 02: shl ax, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe0
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, 0fffbh
        ; Exact mapped bytes 66 23 D1: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd1
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 DD 00 00 00: jmp 0x584d88d3
        __asm _emit 0xe9
        __asm _emit 0xdd
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
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x584d88d3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 0
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x584d88d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b0h], 0
        ; Exact mapped bytes 76 1A: jbe 0x584d8847
        __asm _emit 0x76
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], ecx
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x584d88d3
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b0h], 177h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 7ch], 0
        ; Exact mapped bytes 75 4A: jne 0x584d88b4
        __asm _emit 0x75
        __asm _emit 0x4a
        ; Exact mapped bytes A1 EC 90 94 58: mov eax, dword ptr [0x589490ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 10 06 96 58: cmp eax, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 3B: jne 0x584d88b2
        __asm _emit 0x75
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 80h], 1
        ; Exact mapped bytes 75 2F: jne 0x584d88b2
        __asm _emit 0x75
        __asm _emit 0x2f
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 10 06 96 58: cmp edx, dword ptr [0x58960610]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 13: jne 0x584d88a4
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes A1 10 06 96 58: mov eax, dword ptr [0x58960610]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 1F: jmp 0x584d88d3
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 7ch], 1
        ; Exact mapped bytes 75 16: jne 0x584d88d3
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE EE FF FF: call 0x584d77a0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584d88f4
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584d88f4
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584d895d
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x584d8917
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584d88fd
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 CC FB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584d893b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x584d895d
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584d895b
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CD CC FB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcc
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584d88fd
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
