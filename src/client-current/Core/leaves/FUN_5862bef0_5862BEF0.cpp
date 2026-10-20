// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862BEF0 .. +0x805 bytes.
extern "C" __declspec(naked) void FUN_5862bef0_5862BEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 86ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 808h], ecx
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 824h], ecx
        push 588aeaf4h
        mov ecx, dword ptr [ebp - 824h]
        ; Exact mapped bytes E8 57 08 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B EF FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 12h]
        test edx, edx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5862bfe0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 81ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862bf5c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 81ch]
        add eax, 1
        mov dword ptr [ebp - 81ch], eax
        cmp dword ptr [ebp - 81ch], 9
        ; Exact mapped bytes 7D 7B: jge 0x5862bfe0
        __asm _emit 0x7d
        __asm _emit 0x7b
        imul ecx, dword ptr [ebp - 81ch], 0e84h
        movzx esi, word ptr [ecx + 588f4f90h]
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF EE FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 12h]
        cmp esi, edx
        ; Exact mapped bytes 75 52: jne 0x5862bfdb
        __asm _emit 0x75
        __asm _emit 0x52
        imul eax, dword ptr [ebp - 81ch], 0e84h
        add eax, 588f4f78h
        push eax
        push 588aeaf8h
        ; Exact mapped bytes E8 4D 60 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x60
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 828h], eax
        lea ecx, [ebp - 804h]
        push ecx
        mov ecx, dword ptr [ebp - 828h]
        ; Exact mapped bytes E8 A8 07 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x5862bfe0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6D FF FF FF: jmp 0x5862bf4d
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 82ch], eax
        push 588aeaf5h
        mov ecx, dword ptr [ebp - 82ch]
        ; Exact mapped bytes E8 81 07 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x07
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 65 EE FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [eax + 0dch], 0
        ; Exact mapped bytes 0F 84 AC 00 00 00: je 0x5862c0c4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 820h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c033
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 820h]
        add ecx, 1
        mov dword ptr [ebp - 820h], ecx
        cmp dword ptr [ebp - 820h], 9
        ; Exact mapped bytes 0F 8D 84 00 00 00: jge 0x5862c0c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 820h], 0e84h
        movzx esi, word ptr [edx + 588f4f90h]
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 EE FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [eax + 0d8h]
        cmp esi, eax
        ; Exact mapped bytes 75 58: jne 0x5862c0bf
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE ED FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 0e0h
        mov dword ptr [ebp - 830h], eax
        push 588aeb14h
        ; Exact mapped bytes E8 69 5F EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5f
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 834h], eax
        mov ecx, dword ptr [ebp - 830h]
        push ecx
        imul edx, dword ptr [ebp - 820h], 0e84h
        add edx, 588f4f78h
        push edx
        mov eax, dword ptr [ebp - 834h]
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x5862c024
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 808h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x5862c1a7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 818h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c0f2
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 818h]
        add eax, 1
        mov dword ptr [ebp - 818h], eax
        mov ecx, dword ptr [ebp - 808h]
        movzx edx, word ptr [ecx + 84h]
        cmp dword ptr [ebp - 818h], edx
        ; Exact mapped bytes 7D 60: jge 0x5862c167
        __asm _emit 0x7d
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 818h]
        cmp dword ptr [ecx + edx*4], 0
        ; Exact mapped bytes 74 43: je 0x5862c162
        __asm _emit 0x74
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 818h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 838h], eax
        mov ecx, dword ptr [ebp - 838h]
        push ecx
        ; Exact mapped bytes E8 05 4F 20 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x4f
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 818h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 7C FF FF FF: jmp 0x5862c0e3
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 808h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 31: je 0x5862c1a7
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 83ch], ecx
        mov edx, dword ptr [ebp - 83ch]
        push edx
        ; Exact mapped bytes E8 B7 4E 20 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4e
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 808h]
        mov dword ptr [eax + 88h], 0
        xor ecx, ecx
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 89 8A 84 00 00 00: mov word ptr [edx + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        mov byte ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 840h], edx
        push 588aeaf6h
        mov ecx, dword ptr [ebp - 840h]
        ; Exact mapped bytes E8 9E 05 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 80ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c1fe
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 80ch]
        add eax, 1
        mov dword ptr [ebp - 80ch], eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A7 FA FF FF: call 0x5862bcb0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 80ch], eax
        ; Exact mapped bytes 73 55: jae 0x5862c266
        __asm _emit 0x73
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 80ch]
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D FA FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        test edx, edx
        ; Exact mapped bytes 74 39: je 0x5862c264
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 80ch]
        push eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 FA FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        cmp ecx, 4
        ; Exact mapped bytes 74 1E: je 0x5862c264
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 8B 82 84 00 00 00: mov ax, word ptr [edx + 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C0 01: add ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        mov ecx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 89 81 84 00 00 00: mov word ptr [ecx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 89: jmp 0x5862c1ef
        __asm _emit 0xeb
        __asm _emit 0x89
        mov dword ptr [ebp - 810h], 0
        mov edx, dword ptr [ebp - 808h]
        movzx eax, word ptr [edx + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 47 02 00 00: jle 0x5862c4cc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 808h]
        movzx eax, word ptr [ecx + 84h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 9B 4D 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x4d
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 844h], eax
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [ebp - 844h]
        mov dword ptr [edx + 88h], eax
        mov dword ptr [ebp - 814h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c2dd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 814h]
        add ecx, 1
        mov dword ptr [ebp - 814h], ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C8 F9 FF FF: call 0x5862bcb0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 814h], eax
        ; Exact mapped bytes 0F 83 A5 01 00 00: jae 0x5862c499
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 814h]
        push edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A F9 FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        test eax, eax
        ; Exact mapped bytes 0F 84 82 01 00 00: je 0x5862c494
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 814h]
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C F9 FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax + 2]
        cmp edx, 4
        ; Exact mapped bytes 0F 84 63 01 00 00: je 0x5862c494
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 80ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c34c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 80ch]
        add eax, 1
        mov dword ptr [ebp - 80ch], eax
        cmp dword ptr [ebp - 80ch], 9
        ; Exact mapped bytes 0F 8D 3B 01 00 00: jge 0x5862c494
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 814h]
        push ecx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 F9 FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [eax]
        imul eax, dword ptr [ebp - 80ch], 0e84h
        movzx ecx, word ptr [eax + 588f4f90h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 08 01 00 00: jne 0x5862c48f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 814h]
        push edx
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 F8 FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 848h], eax
        push 588aeb38h
        ; Exact mapped bytes E8 44 5C EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 84ch], eax
        imul eax, dword ptr [ebp - 80ch], 0e84h
        add eax, 588f4f78h
        push eax
        mov ecx, dword ptr [ebp - 848h]
        push ecx
        mov edx, dword ptr [ebp - 84ch]
        push edx
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        ; Exact mapped bytes E8 49 4C 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x4c
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 850h], eax
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 810h]
        mov edx, dword ptr [ebp - 850h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 814h]
        push eax
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 F8 FF FF: call 0x5862bc70
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, word ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 75 24: jne 0x5862c45a
        __asm _emit 0x75
        __asm _emit 0x24
        push 588aeb58h
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 810h]
        mov edx, dword ptr [eax + ecx*4]
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 24: jmp 0x5862c47e
        __asm _emit 0xeb
        __asm _emit 0x24
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 810h]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 810h]
        add edx, 1
        mov dword ptr [ebp - 810h], edx
        ; Exact mapped bytes EB 05: jmp 0x5862c494
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A9 FE FF FF: jmp 0x5862c33d
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 35 FE FF FF: jmp 0x5862c2ce
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 854h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [edx + eax]
        push eax
        mov ecx, dword ptr [ebp - 854h]
        ; Exact mapped bytes E8 B5 02 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        xor ecx, ecx
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 89 8A 8C 00 00 00: mov word ptr [edx + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        mov byte ptr [eax + 9dh], 0
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 858h], edx
        push 588aeaf7h
        mov ecx, dword ptr [ebp - 858h]
        ; Exact mapped bytes E8 76 02 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 810h], 0
        mov dword ptr [ebp - 80ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5862c52f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 80ch]
        add eax, 1
        mov dword ptr [ebp - 80ch], eax
        cmp dword ptr [ebp - 80ch], 3
        ; Exact mapped bytes 0F 8D 65 01 00 00: jge 0x5862c6a1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 80ch]
        mov edx, dword ptr [ebp - 808h]
        cmp dword ptr [edx + ecx*4 + 90h], 0
        ; Exact mapped bytes 74 55: je 0x5862c5a7
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 80ch]
        mov ecx, dword ptr [ebp - 808h]
        cmp dword ptr [ecx + eax*4 + 90h], 0
        ; Exact mapped bytes 74 3F: je 0x5862c5a7
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 80ch]
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        mov dword ptr [ebp - 85ch], ecx
        mov edx, dword ptr [ebp - 85ch]
        push edx
        ; Exact mapped bytes E8 BE 4A 20 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x4a
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 80ch]
        mov ecx, dword ptr [ebp - 808h]
        mov dword ptr [ecx + eax*4 + 90h], 0
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE E8 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 80ch]
        cmp dword ptr [eax + edx*4 + 0f8h], 0
        ; Exact mapped bytes 0F 84 D6 00 00 00: je 0x5862c69c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 8B 88 8C 00 00 00: mov cx, word ptr [eax + 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 808h]
        ; Exact mapped bytes 66 89 8A 8C 00 00 00: mov word ptr [edx + 0x8c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 20 06 96 58: mov ecx, dword ptr [0x58960620]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 81 E8 FF FF: call 0x5862ae70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 80ch], 18h
        lea edx, [eax + ecx + 104h]
        mov dword ptr [ebp - 860h], edx
        push 588aeb5ch
        ; Exact mapped bytes E8 E3 59 EF FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x59
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 864h], eax
        mov eax, dword ptr [ebp - 860h]
        push eax
        mov ecx, dword ptr [ebp - 864h]
        push ecx
        lea edx, [ebp - 804h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [ebp - 804h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        add eax, 1
        push eax
        ; Exact mapped bytes E8 F8 49 20 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x49
        __asm _emit 0x20
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 868h], eax
        mov ecx, dword ptr [ebp - 810h]
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [ebp - 868h]
        mov dword ptr [edx + ecx*4 + 90h], eax
        lea ecx, [ebp - 804h]
        push ecx
        mov edx, dword ptr [ebp - 810h]
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + edx*4 + 90h]
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 810h]
        add edx, 1
        mov dword ptr [ebp - 810h], edx
        ; Exact mapped bytes E9 7F FE FF FF: jmp 0x5862c520
        __asm _emit 0xe9
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 808h]
        movzx ecx, word ptr [eax + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 7E 34: jle 0x5862c6e6
        __asm _emit 0x7e
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 86ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + edx + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 86ch]
        ; Exact mapped bytes E8 9B 00 EC FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5F 49 20 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x49
        __asm _emit 0x20
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
