// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586111C0 .. +0x82C bytes.
extern "C" __declspec(naked) void FUN_586111c0_586111C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0e8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 FA 07 00 00: jne 0x586119da
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 82 88 F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 6E 01 00 00: je 0x58611364
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 14ch]
        ; Exact mapped bytes 0F 85 9A 00 00 00: jne 0x586112ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 41 38 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        cmp eax, 0ffh
        ; Exact mapped bytes 7D 73: jge 0x5861129d
        __asm _emit 0x7d
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 28 38 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 40h
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 38 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x38
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b8h], edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 47 AB 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xab
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 37 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 80h], eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 55 80: call dword ptr [ebp - 0x80]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0x80
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DB D7 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x58611364
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 15ch]
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58611364
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 8C 37 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 40h]
        test eax, eax
        ; Exact mapped bytes 7E 7F: jle 0x5861135b
        __asm _emit 0x7e
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 76 37 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 40h
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E8 01: sub ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe8
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 37 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 84h]
        push eax
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes E8 8F AA 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xaa
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 37 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x37
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 8ch], eax
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 74 FF FF FF: call dword ptr [ebp - 0x8c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1D D7 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 1E 21 F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x21
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7A 01 00 00: je 0x586114f4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + edx + 14ch]
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x5861143b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 BD 36 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 42h]
        cmp eax, 0ffh
        ; Exact mapped bytes 7D 7F: jge 0x5861142d
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 A4 36 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 42h
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 36 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 90h], edx
        mov eax, dword ptr [ebp - 90h]
        push eax
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes E8 BD A9 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa9
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 70 36 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x36
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 98h], eax
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 68 FF FF FF: call dword ptr [ebp - 0x98]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4B D6 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x586114f4
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 15ch]
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x586114f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 FC 35 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 42h]
        test edx, edx
        ; Exact mapped bytes 7E 7F: jle 0x586114eb
        __asm _emit 0x7e
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 E6 35 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 42h
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 35 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0a0h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 FF A8 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 35 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0a4h], edx
        push 0
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 5C FF FF FF: call dword ptr [ebp - 0xa4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8D D5 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 AE 11 FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 78 01 00 00: je 0x58611682
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 14ch]
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x586115cb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 2E 35 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 46h]
        cmp edx, 0ffh
        ; Exact mapped bytes 7D 7F: jge 0x586115bd
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 14 35 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 35 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x35
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 2D A8 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 34 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0b0h], edx
        push 0
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 50 FF FF FF: call dword ptr [ebp - 0xb0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BB D4 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B7 00 00 00: jmp 0x58611682
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 15ch]
        ; Exact mapped bytes 0F 85 9D 00 00 00: jne 0x58611682
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 6D 34 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 46h]
        test ecx, ecx
        ; Exact mapped bytes 7E 7E: jle 0x58611679
        __asm _emit 0x7e
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 57 34 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 46h
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 34 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0b4h], eax
        mov ecx, dword ptr [ebp - 0b4h]
        push ecx
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E8 71 A7 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xa7
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 34 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0bch], ecx
        push 0
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 44 FF FF FF: call dword ptr [ebp - 0xbc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 FF D3 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 40 10 FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 7B 01 00 00: je 0x58611813
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 14ch]
        ; Exact mapped bytes 0F 85 A7 00 00 00: jne 0x5861175a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 9F 33 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        cmp edx, 0ffh
        ; Exact mapped bytes 7D 7F: jge 0x5861174c
        __asm _emit 0x7d
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 85 33 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 44h
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 5ch]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 82 33 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0c4h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0c0h], ecx
        mov edx, dword ptr [ebp - 0c0h]
        push edx
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E8 9E A6 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa6
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 51 33 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x33
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0c8h], edx
        push 0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 38 FF FF FF: call dword ptr [ebp - 0xc8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 2C D3 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x58611813
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 15ch]
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x58611813
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 DD 32 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx edx, word ptr [eax + 44h]
        test edx, edx
        ; Exact mapped bytes 7E 7F: jle 0x5861180a
        __asm _emit 0x7e
        __asm _emit 0x7f
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 C7 32 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        add eax, 44h
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 32 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0cch], ecx
        mov edx, dword ptr [ebp - 0cch]
        push edx
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes E8 E0 A5 1A 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 93 32 E7 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 68h], eax
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 2C FF FF FF: call dword ptr [ebp - 0xd4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6E D2 FF FF: call 0x5860ea80
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 16ch]
        ; Exact mapped bytes 0F 85 99 01 00 00: jne 0x586119be
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 63 F7 FF FF: call 0x58610f90
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 24h], 0
        mov byte ptr [ebp - 23h], 0
        xor edx, edx
        ; Exact mapped bytes 66 89 55 DE: mov word ptr [ebp - 0x22], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 27 82 F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x58611860
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 15 82 F7 FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x82
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 06: jmp 0x58611866
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 24h]
        mov dword ptr [ebp - 6ch], edx
        mov eax, dword ptr [ebp - 6ch]
        mov dword ptr [ebp - 0d8h], eax
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 08 1C F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x1c
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5861189f
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F6 1B F1 FF: call 0x58523490
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x1b
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 70h], eax
        ; Exact mapped bytes EB 06: jmp 0x586118a5
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 24h]
        mov dword ptr [ebp - 70h], edx
        mov eax, dword ptr [ebp - 70h]
        mov dword ptr [ebp - 0dch], eax
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 09 0E FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x586118de
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F7 0D FC FF: call 0x585d26d0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 74h], eax
        ; Exact mapped bytes EB 06: jmp 0x586118e4
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 24h]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 0e0h], eax
        mov ecx, dword ptr [ebp - 0e0h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 AA 0D FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x5861191d
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 98 0D FC FF: call 0x585d26b0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 06: jmp 0x58611923
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 24h]
        mov dword ptr [ebp - 78h], edx
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0e4h], eax
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 1B 31 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        mov cl, byte ptr [eax + 40h]
        mov byte ptr [ebp - 0ch], cl
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 07 31 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        mov al, byte ptr [eax + 42h]
        mov byte ptr [ebp - 0bh], al
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 198h]
        ; Exact mapped bytes E8 F3 30 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 44: mov dx, word ptr [eax + 0x44]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x44
        ; Exact mapped bytes 66 89 55 F6: mov word ptr [ebp - 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf6
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 198h]
        ; Exact mapped bytes E8 DD 30 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 46: mov cx, word ptr [eax + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x46
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [edx + 198h]
        ; Exact mapped bytes E8 C7 30 E7 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x30
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        shr eax, 0ah
        and eax, 3fffffh
        ; Exact mapped bytes 66 89 45 DA: mov word ptr [ebp - 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xda
        lea ecx, [ebp - 1ch]
        push ecx
        movzx edx, word ptr [ebp - 26h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 BE F6 FF: call 0x5857d860
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbe
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1C: jmp 0x586119da
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes 75 0E: jne 0x586119da
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6A F6 21 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf6
        __asm _emit 0x21
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
