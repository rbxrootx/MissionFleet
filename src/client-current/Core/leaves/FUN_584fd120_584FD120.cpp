// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FD120 .. +0x456 bytes.
extern "C" __declspec(naked) void FUN_584fd120_584FD120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
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
        ; Exact mapped bytes 0F 84 31 04 00 00: je 0x584fd574
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
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
        ; Exact mapped bytes 75 44: jne 0x584fd19e
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e0h]
        ; Exact mapped bytes E8 D8 86 FB FF: call 0x584b5840
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x584fd199
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e0h]
        mov dword ptr [ebp - 0ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE 7F FB FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e4h]
        mov dword ptr [ebp - 10h], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 7F FB FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x7f
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 85 01 00 00: jmp 0x584fd323
        __asm _emit 0xe9
        __asm _emit 0x85
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
        ; Exact mapped bytes 0F 85 6A 01 00 00: jne 0x584fd323
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 1e0h]
        ; Exact mapped bytes E8 F9 77 F8 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x584fd2f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 50h
        ; Exact mapped bytes 75 05: jne 0x584fd1ea
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FF 00 00 00: jmp 0x584fd2e9
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e4h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        imul ecx, eax, 6900h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        shr eax, 1
        and eax, 7fffffffh
        imul edx, eax, 0e0h
        lea eax, [ecx + edx + 5890bfd0h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx + 0cch]
        add eax, 1
        push eax
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 78 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 0C 9A F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e4h]
        mov dword ptr [ebp - 1ch], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 76 8C F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e0h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 5E: mov cx, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        imul eax, edx, 6900h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        and edx, 7fffffffh
        imul ecx, edx, 0e0h
        lea edx, [eax + ecx + 5890bfd0h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx + 0cch]
        push edx
        ; Exact mapped bytes 8B 0D 48 24 96 58: mov ecx, dword ptr [0x58962448]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 78 F8 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8E 99 F8 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x99
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1e0h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 82 2B 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x82
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 8A F8 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x584fd323
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1e0h]
        mov dword ptr [ebp - 2ch], ecx
        push -1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 34 7E FB FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1e4h]
        mov dword ptr [ebp - 30h], eax
        push -1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 1E 7E FB FF: call 0x584b5140
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 0C 06 96 58: cmp ecx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x584fd476
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 58 06 96 58: mov ecx, dword ptr [0x58960658]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 50 85 F9 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x85
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 85 2B 01 00 00: jne 0x584fd476
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 240h], 1
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x584fd476
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1c0h], 1
        ; Exact mapped bytes 74 0C: je 0x584fd373
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1c0h], 2
        ; Exact mapped bytes 75 05: jne 0x584fd378
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x584fd461
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        and ecx, 10000000h
        ; Exact mapped bytes 74 6F: je 0x584fd3f8
        __asm _emit 0x74
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 5E: mov ax, word ptr [edx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 5D: je 0x584fd3f8
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 244h]
        cdq
        mov ecx, 28h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x584fd3c9
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 1A 8B F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x8b
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x584fd3f6
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 244h]
        cdq
        mov ecx, 28h
        idiv ecx
        cmp edx, 14h
        ; Exact mapped bytes 75 17: jne 0x584fd3f6
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 EB 8A F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 69: jmp 0x584fd461
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a4h]
        and edx, 1
        ; Exact mapped bytes 74 5B: je 0x584fd461
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 244h]
        cdq
        mov ecx, 28h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x584fd434
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 3ch], eax
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 AF 8A F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2D: jmp 0x584fd461
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 244h]
        cdq
        mov ecx, 28h
        idiv ecx
        cmp edx, 14h
        ; Exact mapped bytes 75 17: jne 0x584fd461
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 40h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 80 8A F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 244h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 244h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 25ch], 2
        ; Exact mapped bytes 75 68: jne 0x584fd4ea
        __asm _emit 0x75
        __asm _emit 0x68
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 68 02 00 00: movsx eax, word ptr [edx + 0x268]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1eh
        ; Exact mapped bytes 7E 41: jle 0x584fd4d2
        __asm _emit 0x7e
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 264h]
        ; Exact mapped bytes E8 01 F7 FF FF: call 0x584fcba0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x584fd4d0
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 0C 06 96 58: cmp edx, dword ptr [0x5896060c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 0B: jne 0x584fd4bc
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 DB FF FF: call 0x584fb0b0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x584fd4d0
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BC EE FF FF: call 0x584fc380
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 68 02 00 00: mov word ptr [ecx + 0x268], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x584fd4ea
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 68 02 00 00: mov ax, word ptr [edx + 0x268]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 68 02 00 00: mov word ptr [ecx + 0x268], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x584fd50b
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x584fd50b
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x584fd574
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x584fd52e
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x584fd514
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA 80 F9 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x584fd552
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
        ; Exact mapped bytes EB 24: jmp 0x584fd574
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x584fd572
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 80 F9 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x584fd514
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
