// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EF640 .. +0x971 bytes.
extern "C" __declspec(naked) void FUN_586ef640_586EF640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 6ch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 84 4C 09 00 00: je 0x586effaf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 0F 85 CB 07 00 00: jne 0x586efe49
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 F5 06 00 00: je 0x586efd85
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 18 D6 FF FF: call 0x586eccb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 1], al
        movzx edx, byte ptr [ebp - 1]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 63 02 00 00: je 0x586ef914
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ef6c3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 61: jge 0x586ef72a
        __asm _emit 0x7d
        __asm _emit 0x61
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 35: je 0x586ef728
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 B9 67 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x67
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 90: jmp 0x586ef6ba
        __asm _emit 0xeb
        __asm _emit 0x90
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 0b75h], 0
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [eax + 0b74h], cl
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0b78h], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0B E0 FF FF: call 0x586ed760
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        cmp ecx, 3
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x586ef804
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 05 DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x586ef7c0
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 05 DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 60 DA FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x586ef7c0
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 04 DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 30 60 DA FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x60
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x586ef7c0
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 04 DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 54 03 DC FF: call 0x584afb10
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x586ef7d8
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        add eax, 5
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 0b75h], al
        ; Exact mapped bytes EB 2C: jmp 0x586ef804
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 04 DC FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C6 58 DB FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x58
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x586ef804
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        add eax, 7
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 0b75h], al
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b75h]
        movzx eax, byte ptr [eax + edx + 58902fc0h]
        test eax, eax
        ; Exact mapped bytes 7E 79: jle 0x586ef8a0
        __asm _emit 0x7e
        __asm _emit 0x79
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586ef839
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7D 61: jge 0x586ef8a0
        __asm _emit 0x7d
        __asm _emit 0x61
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 35: je 0x586ef89e
        __asm _emit 0x74
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 38h], eax
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 43 66 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x66
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 90: jmp 0x586ef830
        __asm _emit 0xeb
        __asm _emit 0x90
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        cmp edx, 4
        ; Exact mapped bytes 75 1B: jne 0x586ef8ca
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 14 06 96 58: mov ecx, dword ptr [0x58960614]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 9C DC FF: call 0x584b9500
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x9c
        __asm _emit 0xdc
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A7 F4 DB FF: call 0x584aed70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf4
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        movzx ecx, byte ptr [ebp - 1]
        cmp ecx, 2
        ; Exact mapped bytes 75 1F: jne 0x586ef8f2
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x586ef8f0
        __asm _emit 0x74
        __asm _emit 0x0b
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 65 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586ef90f
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        movzx ecx, ax
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x586ef90f
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D2 65 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 45 03 00 00: jmp 0x586efc59
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b78h]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0b78h], eax
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 7
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b75h]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0b78h]
        cmp ecx, dword ptr [eax + edx*4 + 589030e0h]
        ; Exact mapped bytes 0F 82 2A 01 00 00: jb 0x586efa80
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 64h]
        ; Exact mapped bytes E8 26 5F DA FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5f
        __asm _emit 0xda
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 06 01 00 00: je 0x586efa7b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586ef987
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 2
        ; Exact mapped bytes 0F 8D 9F 00 00 00: jge 0x586efa30
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 58: je 0x586efa13
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 5
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        movzx ecx, byte ptr [ecx + eax + 58902fc0h]
        test ecx, ecx
        ; Exact mapped bytes 74 35: je 0x586efa13
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 40h], ecx
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CE 64 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 64h]
        mov dword ptr [ebp - 44h], ecx
        push 0
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B6 64 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x64
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x586ef97e
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 D2 FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        cmp eax, 8
        ; Exact mapped bytes 75 31: jne 0x586efa7b
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        movzx edx, byte ptr [edx + ecx + 58902fc1h]
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x586efa7b
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 D9 01 00 00: jmp 0x586efc59
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 7
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        mov edx, dword ptr [edx + ecx*4 + 589030e0h]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 0b78h], 19h
        ; Exact mapped bytes 73 12: jae 0x586efac6
        __asm _emit 0x73
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        imul edx, dword ptr [ecx + 0b78h], 0ah
        add edx, 0fh
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 29: jmp 0x586efaef
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 2ch]
        sub eax, 19h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 0b78h], eax
        ; Exact mapped bytes 72 18: jb 0x586efaef
        __asm _emit 0x72
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 2ch]
        sub eax, dword ptr [edx + 0b78h]
        sub eax, 1
        imul ecx, eax, 0ah
        add ecx, 0fh
        mov dword ptr [ebp - 20h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 64h]
        ; Exact mapped bytes E8 8D 5D DA FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0xda
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 3D: jne 0x586efb47
        __asm _emit 0x75
        __asm _emit 0x3d
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586efb1c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 1A: jge 0x586efb3c
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 A7 63 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x63
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586efb13
        __asm _emit 0xeb
        __asm _emit 0xd7
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1A D1 FF FF: call 0x586ecc60
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x586efbd1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586efb63
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 63: jge 0x586efbcc
        __asm _emit 0x7d
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 8
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 74h]
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        lea edx, [edx + ecx*8]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [edx + eax*4], 0
        ; Exact mapped bytes 74 37: je 0x586efbca
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 77 59 0C 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 8E: jmp 0x586efb5a
        __asm _emit 0xeb
        __asm _emit 0x8e
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x586efc59
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 0b78h], 19h
        ; Exact mapped bytes 75 7C: jne 0x586efc59
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 7
        ; Exact mapped bytes 77 60: ja 0x586efc59
        __asm _emit 0x77
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 24 85 B4 FF 6E 58: jmp dword ptr [eax*4 + 0x586effb4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0x6e
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A5 E4 FF FF: call 0x586ee0b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4B: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1A 83 D9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x83
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 40: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CF DB FF FF: call 0x586ed7f0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 35: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 74 E8 FF FF: call 0x586ee4a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2A: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 19 E2 FF FF: call 0x586ede50
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1F: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6E EB FF FF: call 0x586ee7b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 14: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 93 DF FF FF: call 0x586edbe0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x586efc59
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 82 D9 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        test ecx, ecx
        ; Exact mapped bytes 7E 79: jle 0x586efce0
        __asm _emit 0x7e
        __asm _emit 0x79
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        shl eax, 5
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b75h]
        movzx eax, byte ptr [eax + edx + 58902fbfh]
        test eax, eax
        ; Exact mapped bytes 7E 2B: jle 0x586efcb5
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0b80h]
        ; Exact mapped bytes E8 28 4D D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4d
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x586efcb3
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b80h]
        mov dword ptr [ebp - 50h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 8E FB DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x586efcde
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0b80h]
        ; Exact mapped bytes E8 FD 4C D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x586efcde
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b80h]
        mov dword ptr [ebp - 54h], eax
        push 0
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 63 FB DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x586efd09
        __asm _emit 0xeb
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0b80h]
        ; Exact mapped bytes E8 D2 4C D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x586efd09
        __asm _emit 0x74
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0b80h]
        mov dword ptr [ebp - 58h], eax
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 38 FB DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfb
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        movzx edx, byte ptr [edx + ecx + 58902fc1h]
        test edx, edx
        ; Exact mapped bytes 7E 2B: jle 0x586efd57
        __asm _emit 0x7e
        __asm _emit 0x2b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b84h]
        ; Exact mapped bytes E8 86 4C D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x586efd55
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b84h]
        mov dword ptr [ebp - 5ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 EC FA DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfa
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 29: jmp 0x586efd80
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0b84h]
        ; Exact mapped bytes E8 5B 4C D9 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x4c
        __asm _emit 0xd9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x586efd80
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0b84h]
        mov dword ptr [ebp - 60h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 C1 FA DA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 BF 00 00 00: jmp 0x586efe44
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 23 CF FF FF: call 0x586eccb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx + 0b74h], al
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x586efe44
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 5
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b75h]
        movzx edx, byte ptr [edx + ecx + 58902fc0h]
        test edx, edx
        ; Exact mapped bytes 7E 79: jle 0x586efe44
        __asm _emit 0x7e
        __asm _emit 0x79
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586efddd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7D 61: jge 0x586efe44
        __asm _emit 0x7d
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b74h]
        shl edx, 8
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 74h]
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 0b75h]
        lea ecx, [ecx + eax*8]
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 35: je 0x586efe42
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0b74h]
        shl ecx, 8
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 74h]
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 0b75h]
        lea eax, [eax + edx*8]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 64h], edx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 9F 60 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x60
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 90: jmp 0x586efdd4
        __asm _emit 0xeb
        __asm _emit 0x90
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x586eff25
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 64: jne 0x586efec4
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 8]
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
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
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
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x586efea2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 7D 1A: jge 0x586efec2
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 6ch]
        mov dword ptr [ebp - 68h], eax
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes E8 21 60 D9 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x60
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D7: jmp 0x586efe99
        __asm _emit 0xeb
        __asm _emit 0xd7
        ; Exact mapped bytes EB 61: jmp 0x586eff25
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 4A: jne 0x586eff25
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
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
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 8]
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
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 42 24: mov word ptr [edx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
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
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x586eff46
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x586eff46
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 5A: je 0x586effaf
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x586eff69
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB E6: jmp 0x586eff4f
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F 56 DA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x56
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x586eff8d
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x586effaf
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x586effad
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7B 56 DA FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x56
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB A0: jmp 0x586eff4f
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
