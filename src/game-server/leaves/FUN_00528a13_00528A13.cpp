// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00528A13 .. +0x3FB bytes.
extern "C" __declspec(naked) void FUN_00528a13_00528A13() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ddb6h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0c8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0cch], ecx
        mov ecx, 5de854h
        ; Exact mapped bytes E8 1C E9 01 00: call 0x547360
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 30h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 CA 05 F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 0F 8C 4F 03 00 00: jl 0x528db2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 0F 84 41 03 00 00: je 0x528db2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 EB 65 01 00: call 0x53f06b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x65
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 54h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 68 83 FD FF: call 0x500df4
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        push 5
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 FC 68 FC FF: call 0x4ef3a1
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x528ac8
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 0C FC FF FF: call 0x5286c4
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x528ac8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes EB 0A: jmp 0x528ad2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0d0h], 1
        mov eax, dword ptr [ebp - 0d0h]
        mov dword ptr [ebp - 5ch], eax
        mov ecx, dword ptr [ebp - 30h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x528af6
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 75 0B: jne 0x528af6
        __asm _emit 0x75
        __asm _emit 0x0b
        push 0dh
        ; Exact mapped bytes FF 15 80 25 5E 00: call dword ptr [0x5e2580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 52 34: call dword ptr [edx + 0x34]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x34
        mov dword ptr [ebp - 60h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 5F 81 FD FF: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 64h]
        push eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 8A EE 00 00: call 0x5379ad
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 69 02 00 00: je 0x528d94
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E8 E8 F9 FF FF: call 0x528522
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 7ch], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        lea edx, [ebp - 24h]
        push edx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 35 D2 00 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        add eax, 1
        mov dword ptr [ebp - 78h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [ecx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x528b84
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes EB 14: jmp 0x528b98
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [edx + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 0d4h], eax
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [ebp - 74h]
        lea edx, [ecx + eax + 1]
        mov dword ptr [ebp - 74h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 78h]
        add ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 74h]
        add eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 6ch], eax
        lea ecx, [ebp - 24h]
        push ecx
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 C3 D1 00 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 8ch]
        lea edx, [ecx + eax + 2]
        mov dword ptr [ebp - 84h], edx
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [ebp - 78h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [eax + 0ch], edx
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [ebp - 8ch]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 80h]
        mov dword ptr [eax + 0ch], edx
        lea eax, [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0a4h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0a0h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 9ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 98h], edx
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 FB D2 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 EF D2 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 F3 D4 00 00: call 0x536177
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x528c9c
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 5c8f88h
        ; Exact mapped bytes E8 69 BD 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528c9c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C2: jne 0x528c64
        __asm _emit 0x75
        __asm _emit 0xc2
        lea ecx, [ebp - 0a4h]
        push ecx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 1F D5 00 00: call 0x5361d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x528cf5
        __asm _emit 0x74
        __asm _emit 0x40
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0c8h], eax
        mov dword ptr [ebp - 0c4h], ecx
        mov edx, dword ptr [ebp - 0c4h]
        push edx
        mov eax, dword ptr [ebp - 0c8h]
        push eax
        lea ecx, [ebp - 0c0h]
        push ecx
        lea ecx, [ebp - 0a4h]
        ; Exact mapped bytes E8 7D D1 00 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DA C9 00 00: call 0x5356cb
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x528d09
        __asm _emit 0x75
        __asm _emit 0x14
        push 126h
        push 5c8f88h
        ; Exact mapped bytes E8 FC BC 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x528d09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 93: jne 0x528ca2
        __asm _emit 0x75
        __asm _emit 0x93
        mov eax, dword ptr [ebp - 58h]
        push eax
        lea ecx, [ebp - 94h]
        ; Exact mapped bytes E8 AE B2 FD FF: call 0x503fcc
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 94h]
        push ecx
        lea ecx, [ebp - 8ch]
        ; Exact mapped bytes E8 36 D2 00 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 D8 FB 00 00: call 0x538915
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        push 0cc0020h
        push 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        imul eax, dword ptr [ebp - 7ch]
        push eax
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 0a0h]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 13 06 01 00: call 0x53938a
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 4ch]
        push eax
        ; Exact mapped bytes FF 15 D4 1E 5E 00: call dword ptr [0x5e1ed4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 94h]
        ; Exact mapped bytes E8 1D DD 00 00: call 0x536ab1
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 50 34: call dword ptr [eax + 0x34]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x34
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 E5 81 FD FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x81
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1B: je 0x528dd3
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 15: je 0x528dd3
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0a8h], ecx
        mov edx, dword ptr [ebp - 0a8h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx + 2]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
