// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868F6E0 .. +0x825 bytes.
extern "C" __declspec(naked) void FUN_5868f6e0_5868F6E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8ch
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
        ; Exact mapped bytes 0F 84 FD 07 00 00: je 0x5868ff03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x07
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
        ; Exact mapped bytes 74 1B: je 0x5868f738
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
        ; Exact mapped bytes 0F 85 20 02 00 00: jne 0x5868f958
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d0h], 0
        ; Exact mapped bytes 7E 15: jle 0x5868f759
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d0h], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 0F 85 EA 01 00 00: jne 0x5868f953
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
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
        cmp ecx, 1
        ; Exact mapped bytes 0F 85 58 01 00 00: jne 0x5868f8dc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 AC 00 00 00: movsx eax, word ptr [edx + 0xac]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 1
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes 66 89 45 F2: mov word ptr [ebp - 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf2
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 AC 00 00 00: mov cx, word ptr [eax + 0xac]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A AC 00 00 00: mov word ptr [edx + 0xac], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 F2: mov ax, word ptr [ebp - 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf2
        ; Exact mapped bytes 66 89 45 F4: mov word ptr [ebp - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf4
        movzx ecx, word ptr [ebp - 0ch]
        cmp ecx, 14h
        ; Exact mapped bytes 7D 33: jge 0x5868f7f6
        __asm _emit 0x7d
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e0h]
        mov dword ptr [ebp - 2ch], eax
        movzx ecx, word ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 64 00 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 30h], eax
        movzx ecx, word ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 4B 00 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        movzx edx, word ptr [ebp - 0ch]
        cmp edx, 14h
        ; Exact mapped bytes 0F 8C D7 00 00 00: jl 0x5868f8da
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd7
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e0h]
        mov dword ptr [ebp - 34h], ecx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 97 66 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov dword ptr [ebp - 38h], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 81 66 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        mov dword ptr [ebp - 3ch], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 6B 66 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 40h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 55 66 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d8h]
        mov dword ptr [ebp - 44h], eax
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 3F 66 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 48h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 29 65 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f0h]
        mov dword ptr [ebp - 4ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 13 65 DF FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x65
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes EB 77: jmp 0x5868f953
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
        ; Exact mapped bytes 75 60: jne 0x5868f953
        __asm _emit 0x75
        __asm _emit 0x60
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
        ; Exact mapped bytes E9 21 05 00 00: jmp 0x5868fe79
        __asm _emit 0xe9
        __asm _emit 0x21
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
        cmp edx, 2
        ; Exact mapped bytes 0F 85 06 05 00 00: jne 0x5868fe79
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 70 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CB 1C E4 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1c
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 04 00 00: je 0x5868fe79
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0c8h]
        test ecx, ecx
        ; Exact mapped bytes 7E 18: jle 0x5868f9c5
        __asm _emit 0x7e
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 C8 00 00 00: mov ax, word ptr [edx + 0xc8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 C8 00 00 00: mov word ptr [ecx + 0xc8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 1
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x5868fb25
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0b4h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC E0 EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xe0
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C0 6F DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 CA DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 3
        ; Exact mapped bytes 75 7E: jne 0x5868fa8d
        __asm _emit 0x75
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 7dh
        ; Exact mapped bytes 7C 64: jl 0x5868fa7f
        __asm _emit 0x7c
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 6F DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 CA DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xca
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 56 E1 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x56
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 7C FF FF FF: movsd qword ptr [ebp - 0x84], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 75 6F DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E 2F F4 FF: call 0x585d29f0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x2f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes F2 0F 2A 45 EC: cvtsi2sd xmm0, dword ptr [ebp - 0x14]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 14h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 70 02 8B 58: mulsd xmm0, qword ptr [0x588b0270]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 8D 7C FF FF FF: movsd xmm1, qword ptr [ebp - 0x84]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 09: jbe 0x5868fa88
        __asm _emit 0x76
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 25 00 00: call 0x58691fa0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x5868fb25
        __asm _emit 0xe9
        __asm _emit 0x98
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
        ; Exact mapped bytes E8 28 6F DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x6f
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 C9 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 6
        ; Exact mapped bytes 75 7E: jne 0x5868fb25
        __asm _emit 0x75
        __asm _emit 0x7e
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 96h
        ; Exact mapped bytes 7C 64: jl 0x5868fb1a
        __asm _emit 0x7c
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 78 C9 DF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 55 E1 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x55
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes F2 0F 2A C0: cvtsi2sd xmm0, eax
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 85 74 FF FF FF: movsd qword ptr [ebp - 0x8c], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 DA 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 03 2F F4 FF: call 0x585d29f0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x2f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes F2 0F 2A 45 E8: cvtsi2sd xmm0, dword ptr [ebp - 0x18]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x45
        __asm _emit 0xe8
        mov edx, dword ptr [ebp - 18h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 59 05 68 02 8B 58: mulsd xmm0, qword ptr [0x588b0268]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 10 8D 74 FF FF FF: movsd xmm1, qword ptr [ebp - 0x8c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 76 0B: jbe 0x5868fb25
        __asm _emit 0x76
        __asm _emit 0x0b
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C FB FF FF: call 0x5868f6a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 90 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 49 C9 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        test eax, eax
        ; Exact mapped bytes 0F 84 A1 02 00 00: je 0x5868fde3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C C9 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 3
        ; Exact mapped bytes 0F 84 83 02 00 00: je 0x5868fde3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0E C9 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xc9
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 0F 84 65 02 00 00: je 0x5868fde3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 6E DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F0 C8 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx eax, ax
        cmp eax, 1
        ; Exact mapped bytes 75 76: jne 0x5868fc0e
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov dword ptr [ebp - 50h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 92 FC E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0ech]
        ; Exact mapped bytes E8 F8 4D DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        add eax, 1
        cmp eax, 0ch
        ; Exact mapped bytes 7D 17: jge 0x5868fbe7
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        imul eax, dword ptr [eax + 0b0h], 0ch
        cdq
        mov ecx, 4bh
        idiv ecx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5868fbee
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0ch
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 46 FC E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes E8 B7 4D DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes E9 BB 01 00 00: jmp 0x5868fdc9
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 6D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x6d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 C8 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xc8
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 2
        ; Exact mapped bytes 75 7C: jne 0x5868fca4
        __asm _emit 0x75
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 02 FC E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfc
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes E8 68 4D DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 1
        test eax, eax
        ; Exact mapped bytes 7E 1E: jle 0x5868fc7d
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 0b0h], 0ch
        cdq
        mov ecx, 4bh
        idiv ecx
        mov edx, 0ch
        sub edx, eax
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 07: jmp 0x5868fc84
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 B0 FB E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ech]
        ; Exact mapped bytes E8 21 4D DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4d
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x5868fdc9
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 6D DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA C7 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc7
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 4
        ; Exact mapped bytes 75 79: jne 0x5868fd37
        __asm _emit 0x75
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 60h], ecx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 6C FB E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ech]
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ech]
        ; Exact mapped bytes E8 D2 4C DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xff
        add eax, 1
        cmp eax, 16h
        ; Exact mapped bytes 7D 1A: jge 0x5868fd10
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0b0h], 0ah
        cdq
        mov ecx, 32h
        idiv ecx
        add eax, 0ch
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x5868fd17
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 16h
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 1D FB E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfb
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes E8 8E 4C DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x5868fdc9
        __asm _emit 0xe9
        __asm _emit 0x92
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
        ; Exact mapped bytes E8 7E 6C DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 C7 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xc7
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx ecx, ax
        cmp ecx, 5
        ; Exact mapped bytes 75 78: jne 0x5868fdc9
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov dword ptr [ebp - 68h], eax
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 D9 FA E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ech]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        ; Exact mapped bytes E8 3F 4C DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xff
        sub eax, 1
        cmp eax, 0ch
        ; Exact mapped bytes 7E 1E: jle 0x5868fda7
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 0b0h], 0ah
        cdq
        mov ecx, 32h
        idiv ecx
        mov edx, 16h
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        ; Exact mapped bytes EB 07: jmp 0x5868fdae
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0ch
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 86 FA E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ech]
        ; Exact mapped bytes E8 F7 4B DF FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x4b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], eax
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x5868fe79
        __asm _emit 0xe9
        __asm _emit 0x96
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
        ; Exact mapped bytes E8 D2 6B DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B C6 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 75 19: jne 0x5868fe15
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 70h], ecx
        push 0
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 2E FA E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 64: jmp 0x5868fe79
        __asm _emit 0xeb
        __asm _emit 0x64
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 6B DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 C6 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 3
        ; Exact mapped bytes 75 19: jne 0x5868fe48
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 74h], ecx
        push 0ch
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FB F9 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 31: jmp 0x5868fe79
        __asm _emit 0xeb
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6D 6B DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 C6 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc6
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 6
        ; Exact mapped bytes 75 17: jne 0x5868fe79
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 78h], ecx
        push 16h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 C8 F9 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf9
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x5868fe9a
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5868fe9a
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x5868ff03
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5868febd
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x5868fea3
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4B 57 E0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x57
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x5868fee1
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
        ; Exact mapped bytes EB 24: jmp 0x5868ff03
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x5868ff01
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 27 57 E0 FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x57
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 7ch], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x5868fea3
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
