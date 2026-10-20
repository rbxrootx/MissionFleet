// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876C0F0 .. +0x3AA bytes.
extern "C" __declspec(naked) void FUN_5876c0f0_5876C0F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5B 35 FF FF: call 0x5875f680
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 12a0h]
        xor edx, 55555555h
        sub edx, dword ptr [ebp - 0ch]
        xor edx, 55555555h
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 12a0h], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        imul edx, ecx, 64h
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 6C CF FF FF: call 0x587690f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 74 6B: je 0x5876c1fa
        __asm _emit 0x74
        __asm _emit 0x6b
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 12a0h]
        xor edx, 55555555h
        ; Exact mapped bytes 7D 51: jge 0x5876c1fa
        __asm _emit 0x7d
        __asm _emit 0x51
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 12a0h]
        xor eax, 55555555h
        neg eax
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 1D: jge 0x5876c1e4
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        neg ecx
        mov dword ptr [ebp - 8], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 12a0h], 55555555h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 12a0h]
        xor ecx, 55555555h
        sub ecx, dword ptr [ebp - 18h]
        xor ecx, 55555555h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 12a0h], ecx
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 12a0h]
        xor eax, 55555555h
        ; Exact mapped bytes 7D 16: jge 0x5876c25c
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 12a0h], 55555555h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 46 8E D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7E 18: jle 0x5876c287
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        add eax, 34ch
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DC FC DE FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfc
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x5876c2ae
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 0F 8E D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd3
        __asm _emit 0xff
        sub eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 B3 FC DE FF: call 0x5855bf60
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xfc
        __asm _emit 0xde
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 E8 8D D3 FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E9 1B F0 FF: call 0x5866dec0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1b
        __asm _emit 0xf0
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD A6 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 85 99 00 00 00: jne 0x5876c385
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 59 AE D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 12a0h]
        xor edx, 55555555h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DD 79 F7 FF: call 0x586e3d00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 AE D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 12a0h]
        xor eax, 55555555h
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 A7 79 F7 FF: call 0x586e3d00
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC AD D6 FF: call 0x584d7150
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xad
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 1B 4F E5 FF: call 0x585c1290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4f
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 EC 75 F7 FF: call 0x586e3970
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x75
        __asm _emit 0xf7
        __asm _emit 0xff
        nop
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 89 FF FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5f0ch], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x5876c48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 4
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x5876c48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 5
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x5876c48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5f10h], 40000000h
        ; Exact mapped bytes 83 3D 34 2E 90 58 00: cmp dword ptr [0x58902e34], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x5876c48e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 A6 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa6
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 85 D1 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 94 D2 FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0xff
        sar eax, 1
        imul edi, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 A5 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 09 96 D2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x96
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, esi
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 8]
        neg esi
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 A5 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FB 92 D2 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x92
        __asm _emit 0xd2
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 94 D2 FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x94
        __asm _emit 0xd2
        __asm _emit 0xff
        sar eax, 1
        imul ebx, eax, 3e8h
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B A5 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 95 D2 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x95
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        mov eax, ebx
        cdq
        idiv ecx
        add edi, eax
        add esi, edi
        mov dword ptr [ebp - 48h], esi
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ea8h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 33 17 E0 FF: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
