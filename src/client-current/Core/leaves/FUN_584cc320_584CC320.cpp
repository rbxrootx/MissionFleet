// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584CC320 .. +0x4C3 bytes.
extern "C" __declspec(naked) void FUN_584cc320_584CC320() {
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
        ; Exact mapped bytes 0F 84 9E 04 00 00: je 0x584cc7e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
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
        ; Exact mapped bytes 74 27: je 0x584cc381
        __asm _emit 0x74
        __asm _emit 0x27
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
        ; Exact mapped bytes 74 10: je 0x584cc381
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 40000000h
        ; Exact mapped bytes 0F 85 D6 03 00 00: jne 0x584cc757
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 84h]
        ; Exact mapped bytes 75 15: jne 0x584cc3a7
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 88h]
        ; Exact mapped bytes 0F 84 E6 01 00 00: je 0x584cc58d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 84h]
        sub eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 88h]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 2
        ; Exact mapped bytes 0F 85 EB 00 00 00: jne 0x584cc4c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], -8
        ; Exact mapped bytes 7E 58: jle 0x584cc436
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 52: jge 0x584cc436
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 0ch], -4
        ; Exact mapped bytes 7E 39: jle 0x584cc423
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x584cc423
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x584cc3ff
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584cc41b
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 09: jle 0x584cc40e
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 07: jmp 0x584cc415
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584cc42e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x584cc445
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
        ; Exact mapped bytes 7E 58: jle 0x584cc4a9
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 52: jge 0x584cc4a9
        __asm _emit 0x7d
        __asm _emit 0x52
        cmp dword ptr [ebp - 8], -4
        ; Exact mapped bytes 7E 39: jle 0x584cc496
        __asm _emit 0x7e
        __asm _emit 0x39
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x584cc496
        __asm _emit 0x7d
        __asm _emit 0x33
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x584cc472
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0ffffffffh
        ; Exact mapped bytes EB 1C: jmp 0x584cc48e
        __asm _emit 0xeb
        __asm _emit 0x1c
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 09: jle 0x584cc481
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 07: jmp 0x584cc488
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584cc4a1
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 0F: jmp 0x584cc4b8
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
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x584cc57c
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 74h], 1
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x584cc57c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 24: jle 0x584cc4fa
        __asm _emit 0x7e
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 78h]
        ; Exact mapped bytes 7C 0B: jl 0x584cc4ec
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 34h], edx
        ; Exact mapped bytes EB 06: jmp 0x584cc4f2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 26: jmp 0x584cc520
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        neg eax
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 7F 0D: jg 0x584cc514
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        neg edx
        mov dword ptr [ebp - 38h], edx
        ; Exact mapped bytes EB 06: jmp 0x584cc51a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 24: jle 0x584cc550
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes 7C 0B: jl 0x584cc542
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 06: jmp 0x584cc548
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], edx
        ; Exact mapped bytes EB 26: jmp 0x584cc576
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        neg ecx
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7F 0D: jg 0x584cc56a
        __asm _emit 0x7f
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        neg eax
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 06: jmp 0x584cc570
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 8C 2E 00: call 0x587b51d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x8c
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 80h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x584cc639
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 80h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 7E 44: jle 0x584cc5f7
        __asm _emit 0x7e
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 80h]
        sub edx, dword ptr [ecx + 28h]
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7F 15: jg 0x584cc5df
        __asm _emit 0x7f
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 8F 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 16: jmp 0x584cc5f5
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C 8F 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 42: jmp 0x584cc639
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7F 15: jg 0x584cc623
        __asm _emit 0x7f
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 8F 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 16: jmp 0x584cc639
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        sub edx, dword ptr [ecx + 6ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 8F 2E 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8f
        __asm _emit 0x2e
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x584cc757
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 0F 85 F4 00 00 00: jne 0x584cc757
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 80h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x584cc757
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x584cc68e
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
        ; Exact mapped bytes 75 3B: jne 0x584cc6e0
        __asm _emit 0x75
        __asm _emit 0x3b
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
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 12: je 0x584cc6de
        __asm _emit 0x74
        __asm _emit 0x12
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
        ; Exact mapped bytes EB 77: jmp 0x584cc757
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
        ; Exact mapped bytes 75 60: jne 0x584cc757
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
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584cc778
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584cc778
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 5A: je 0x584cc7e1
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x584cc79b
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB E6: jmp 0x584cc781
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D 8E FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584cc7bf
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
        ; Exact mapped bytes EB 24: jmp 0x584cc7e1
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584cc7df
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 49 8E FC FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x8e
        __asm _emit 0xfc
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
        ; Exact mapped bytes EB A0: jmp 0x584cc781
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
