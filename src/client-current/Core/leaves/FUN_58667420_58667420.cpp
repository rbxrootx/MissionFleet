// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58667420 .. +0x3C9 bytes.
extern "C" __declspec(naked) void FUN_58667420_58667420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 AE 03 00 00: jne 0x586677e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0bch]
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x586674cc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x5866745b
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D8 E2 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1E: je 0x5866747f
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A7 8E E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x5866747d
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9B 8E E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A4 8C FB FF: call 0x58620120
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x58667450
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 0B: jmp 0x58667495
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9E E2 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xe2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1E: je 0x586674b9
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 6D 8E E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x586674b7
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 8E E4 FF: call 0x584b0310
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x8e
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6A 8C FB FF: call 0x58620120
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x8c
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D1: jmp 0x5866748a
        __asm _emit 0xeb
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 15 03 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0c0h]
        ; Exact mapped bytes 75 1F: jne 0x586674f9
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0fch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 0fch]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 E8 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0c4h]
        ; Exact mapped bytes 75 18: jne 0x5866751f
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        push 589604e0h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 47 5E F1 FF: call 0x5857d360
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x5e
        __asm _emit 0xf1
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 C2 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 75 1E: jne 0x5866754b
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 0B: jne 0x58667546
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 26 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 96 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0b8h]
        ; Exact mapped bytes 75 1F: jne 0x58667578
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 0B: jne 0x58667573
        __asm _emit 0x75
        __asm _emit 0x0b
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E 26 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 69 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 75 16: jne 0x5866759c
        __asm _emit 0x75
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 1B 00 00: call 0x586690f0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0d4h]
        ; Exact mapped bytes 75 1B: jne 0x586675c5
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes A1 34 05 96 58: mov eax, dword ptr [0x58960534]
        __asm _emit 0xa1
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 30 05 96 58: mov ecx, dword ptr [0x58960530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 1B 00 00: call 0x586690f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1C 02 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 100h]
        ; Exact mapped bytes 0F 85 F0 00 00 00: jne 0x586676c7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 68: jne 0x5866764d
        __asm _emit 0x75
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e8h], 0
        ; Exact mapped bytes 74 5A: je 0x5866764b
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 C1 D3 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5866764b
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 E2 00 00 00: movsx eax, word ptr [edx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 3A: jle 0x5866764b
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 E2 00 00 00: mov dx, word ptr [ecx + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 EA 01: sub dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E2 00 00 00: mov word ptr [eax + 0xe2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 89 D3 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 66 25 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 75: jmp 0x586676c2
        __asm _emit 0xeb
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 DE 00 00 00: movsx ecx, word ptr [eax + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 1
        ; Exact mapped bytes 75 66: jne 0x586676c2
        __asm _emit 0x75
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e4h], 0
        ; Exact mapped bytes 74 5A: je 0x586676c2
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 4A D3 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x586676c2
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 E0 00 00 00: movsx edx, word ptr [ecx + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 7E 3A: jle 0x586676c2
        __asm _emit 0x7e
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 E0 00 00 00: mov cx, word ptr [eax + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E9 01: sub cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E0 00 00 00: mov word ptr [edx + 0xe0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e4h]
        ; Exact mapped bytes E8 12 D3 E1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xd3
        __asm _emit 0xe1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 24 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 104h]
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x586677e1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DE 00 00 00: movsx edx, word ptr [ecx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 75 78: jne 0x5866775f
        __asm _emit 0x75
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e8h], 0
        ; Exact mapped bytes 74 67: je 0x5866775a
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e8h]
        ; Exact mapped bytes E8 2F E0 E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe0
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5866775a
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 E2 00 00 00: movsx eax, word ptr [edx + 0xe2]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 91 DA 00 00 00: movsx edx, word ptr [ecx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x91
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 5
        cmp eax, edx
        ; Exact mapped bytes 7D 3A: jge 0x5866775a
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 E2 00 00 00: mov cx, word ptr [eax + 0xe2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 8A E2 00 00 00: mov word ptr [edx + 0xe2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        ; Exact mapped bytes E8 EA DF E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 24 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x586677e1
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 DE 00 00 00: movsx eax, word ptr [edx + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 73: jne 0x586677e1
        __asm _emit 0x75
        __asm _emit 0x73
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0e4h], 0
        ; Exact mapped bytes 74 67: je 0x586677e1
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0e4h]
        ; Exact mapped bytes E8 A8 DF E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x586677e1
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 88 E0 00 00 00: movsx ecx, word ptr [eax + 0xe0]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BF 82 D8 00 00 00: movsx eax, word ptr [edx + 0xd8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        cmp ecx, eax
        ; Exact mapped bytes 7D 3A: jge 0x586677e1
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 91 E0 00 00 00: mov dx, word ptr [ecx + 0xe0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C2 01: add dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x01
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 90 E0 00 00 00: mov word ptr [eax + 0xe0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0e4h]
        ; Exact mapped bytes E8 63 DF E2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdf
        __asm _emit 0xe2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0e4h], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 23 00 00: call 0x58669bb0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
