// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F46E0 .. +0x1382 bytes.
extern "C" __declspec(naked) void FUN_586f46e0_586F46E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 268h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b3a28h
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 260h], 0
        ; Exact mapped bytes 74 49: je 0x586f474a
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 260h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x586f4733
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0dch], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 24 FF FF FF: call dword ptr [ebp - 0xdc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f473d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 260h], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586f475c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 0F 8D F6 00 00 00: jge 0x586f485c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x586f4778
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7D 78: jge 0x586f47f6
        __asm _emit 0x7d
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0e0h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes 74 5D: je 0x586f47f1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 0e0h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x586f47d0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 1C FF FF FF: call dword ptr [ebp - 0xe4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f47da
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e8h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 0e0h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + ecx*4], 0
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x586f476f
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0d4h], 0
        ; Exact mapped bytes 74 51: je 0x586f4857
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0d4h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x586f483c
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ech], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 14 FF FF FF: call dword ptr [ebp - 0xec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4846
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0d4h], 0
        ; Exact mapped bytes E9 F7 FE FF FF: jmp 0x586f4753
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 0d4h], 0
        ; Exact mapped bytes 74 5B: je 0x586f48cc
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0d4h]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x586f48ac
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 0C FF FF FF: call dword ptr [ebp - 0xf4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f48b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0d4h], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [ecx + eax], 0
        ; Exact mapped bytes 74 71: je 0x586f495d
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x586f4932
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f493c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax + 0e0h]
        mov eax, 4
        shl eax, 0
        cmp dword ptr [edx + eax], 0
        ; Exact mapped bytes 74 71: je 0x586f49ee
        __asm _emit 0x74
        __asm _emit 0x71
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x586f49c3
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 104h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 FC FE FF FF: call dword ptr [ebp - 0x104]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f49cd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 0e0h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 60h], 0
        ; Exact mapped bytes 74 43: je 0x586f4a3a
        __asm _emit 0x74
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 2ch], edx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x586f4a26
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 10ch], edx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 F4 FE FF FF: call dword ptr [ebp - 0x10c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4a30
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 64h], 0
        ; Exact mapped bytes 74 55: je 0x586f4aa1
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 64h]
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x586f4a84
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 114h], ecx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 EC FE FF FF: call dword ptr [ebp - 0x114]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4a8e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 64h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 64h], 0
        ; Exact mapped bytes 74 55: je 0x586f4b08
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 64h]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x586f4aeb
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 11ch], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 E4 FE FF FF: call dword ptr [ebp - 0x11c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4af5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 64h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 364h], 0
        ; Exact mapped bytes 74 49: je 0x586f4b5d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 364h]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x586f4b46
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 124h], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 DC FE FF FF: call dword ptr [ebp - 0x124]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4b50
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 364h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x586f4bb2
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x586f4b9b
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 12ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 D4 FE FF FF: call dword ptr [ebp - 0x12c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4ba5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a4h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x586f4c07
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x586f4bf0
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 134h], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4bfa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a8h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ach], 0
        ; Exact mapped bytes 74 49: je 0x586f4c5c
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x586f4c45
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 13ch], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 C4 FE FF FF: call dword ptr [ebp - 0x13c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4c4f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], 0
        ; Exact mapped bytes 74 49: je 0x586f4cb1
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x586f4c9a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 144h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 BC FE FF FF: call dword ptr [ebp - 0x144]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4ca4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b4h], 0
        ; Exact mapped bytes 74 49: je 0x586f4d06
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x586f4cef
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 B4 FE FF FF: call dword ptr [ebp - 0x14c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4cf9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b8h], 0
        ; Exact mapped bytes 74 49: je 0x586f4d5b
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b8h]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x586f4d44
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 154h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 AC FE FF FF: call dword ptr [ebp - 0x154]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4d4e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0bch], 0
        ; Exact mapped bytes 74 49: je 0x586f4db0
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x586f4d99
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 A4 FE FF FF: call dword ptr [ebp - 0x15c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4da3
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0c0h], 0
        ; Exact mapped bytes 74 49: je 0x586f4e05
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x586f4dee
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 164h], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 9C FE FF FF: call dword ptr [ebp - 0x164]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4df8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0c4h], 0
        ; Exact mapped bytes 74 49: je 0x586f4e5a
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c4h]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x586f4e43
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 16ch], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 94 FE FF FF: call dword ptr [ebp - 0x16c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4e4d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 120h], 0
        ; Exact mapped bytes 74 49: je 0x586f4eaf
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 120h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x586f4e98
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 174h], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4ea2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 120h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 124h], 0
        ; Exact mapped bytes 74 49: je 0x586f4f04
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x586f4eed
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 17ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 84 FE FF FF: call dword ptr [ebp - 0x17c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4ef7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 124h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0cch], 0
        ; Exact mapped bytes 74 49: je 0x586f4f59
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x586f4f42
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4f4c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0d0h], 0
        ; Exact mapped bytes 74 49: je 0x586f4fae
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x586f4f97
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4fa1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 110h], 0
        ; Exact mapped bytes 74 49: je 0x586f5003
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110h]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x586f4fec
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 194h], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 6C FE FF FF: call dword ptr [ebp - 0x194]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f4ff6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 114h], 0
        ; Exact mapped bytes 74 49: je 0x586f5058
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [ebp - 74h], edx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x586f5041
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 74h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f504b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 114h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 360h], 0
        ; Exact mapped bytes 74 49: je 0x586f50ad
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 360h]
        mov dword ptr [ebp - 78h], eax
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x586f5096
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 5C FE FF FF: call dword ptr [ebp - 0x1a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f50a0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 360h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f50bf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1fh
        ; Exact mapped bytes 0F 8D C7 00 00 00: jge 0x586f5190
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 264h], 0
        ; Exact mapped bytes 74 51: je 0x586f512a
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 264h]
        mov dword ptr [ebp - 7ch], ecx
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x586f510f
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 7ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5119
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 264h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 2e0h], 0
        ; Exact mapped bytes 74 51: je 0x586f518b
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2e0h]
        mov dword ptr [ebp - 80h], edx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x586f5170
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1b4h], edx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 4C FE FF FF: call dword ptr [ebp - 0x1b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f517a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 2e0h], 0
        ; Exact mapped bytes E9 26 FF FF FF: jmp 0x586f50b6
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 248h], 0
        ; Exact mapped bytes 74 55: je 0x586f51f1
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 248h]
        mov dword ptr [ebp - 84h], ecx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x586f51da
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 84h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1bch], ecx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 44 FE FF FF: call dword ptr [ebp - 0x1bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f51e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 248h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 24ch], 0
        ; Exact mapped bytes 74 55: je 0x586f5252
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24ch]
        mov dword ptr [ebp - 88h], edx
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x586f523b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1c4h], edx
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 3C FE FF FF: call dword ptr [ebp - 0x1c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5245
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 24ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 250h], 0
        ; Exact mapped bytes 74 55: je 0x586f52b3
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 250h]
        mov dword ptr [ebp - 8ch], eax
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x586f529c
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 8ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1cch], eax
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 34 FE FF FF: call dword ptr [ebp - 0x1cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f52a6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 250h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f52c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 31 01 00 00: jge 0x586f5400
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 6ch], 0
        ; Exact mapped bytes 74 57: je 0x586f5333
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 6ch]
        mov dword ptr [ebp - 90h], ecx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x586f531b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1d4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 2C FE FF FF: call dword ptr [ebp - 0x1d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5325
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 6ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 74h], 0
        ; Exact mapped bytes 74 57: je 0x586f5397
        __asm _emit 0x74
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 74h]
        mov dword ptr [ebp - 94h], edx
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x586f537f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1dch], edx
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 24 FE FF FF: call dword ptr [ebp - 0x1dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5389
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 74h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 7ch], 0
        ; Exact mapped bytes 74 57: je 0x586f53fb
        __asm _emit 0x74
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 7ch]
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x586f53e3
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e4h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 1C FE FF FF: call dword ptr [ebp - 0x1e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f53ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 7ch], 0
        ; Exact mapped bytes E9 BC FE FF FF: jmp 0x586f52bc
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586f5412
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 0F 8D 4C 01 00 00: jge 0x586f5568
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 94h], 0
        ; Exact mapped bytes 74 5D: je 0x586f5489
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 94h]
        mov dword ptr [ebp - 9ch], edx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x586f546e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 9ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1ech], edx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5478
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 94h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 9ch], 0
        ; Exact mapped bytes 74 5D: je 0x586f54f6
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 9ch]
        mov dword ptr [ebp - 0a0h], eax
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x586f54db
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 0C FE FF FF: call dword ptr [ebp - 0x1f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f54e5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 9ch], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 84h], 0
        ; Exact mapped bytes 74 5D: je 0x586f5563
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 84h]
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x586f5548
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5552
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 84h], 0
        ; Exact mapped bytes E9 A1 FE FF FF: jmp 0x586f5409
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 128h], 0
        ; Exact mapped bytes 74 55: je 0x586f55c9
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 128h]
        mov dword ptr [ebp - 0a8h], eax
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x586f55b2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0a8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 204h], eax
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f55bc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 128h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 12ch], 0
        ; Exact mapped bytes 74 55: je 0x586f562a
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 12ch]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x586f5613
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 20ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f561d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 130h], 0
        ; Exact mapped bytes 74 55: je 0x586f568b
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 130h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x586f5674
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 214h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f567e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 130h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0c8h], 0
        ; Exact mapped bytes 74 55: je 0x586f56ec
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c8h]
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x586f56d5
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 21ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f56df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8ch], 0
        ; Exact mapped bytes 74 55: je 0x586f574d
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x586f5736
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 224h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5740
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], 0
        ; Exact mapped bytes 74 55: je 0x586f57ae
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x586f5797
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 22ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f57a1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 90h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 134h], 0
        ; Exact mapped bytes 74 55: je 0x586f580f
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 134h]
        mov dword ptr [ebp - 0c0h], eax
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x586f57f8
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 234h], eax
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5802
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 138h], 0
        ; Exact mapped bytes 74 55: je 0x586f5870
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 138h]
        mov dword ptr [ebp - 0c4h], ecx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x586f5859
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 23ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5863
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 138h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 13ch], 0
        ; Exact mapped bytes 74 55: je 0x586f58d1
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 0c8h], edx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x586f58ba
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 244h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f58c4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 13ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 140h], 0
        ; Exact mapped bytes 74 55: je 0x586f5932
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 140h]
        mov dword ptr [ebp - 0cch], eax
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x586f591b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0cch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5925
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 140h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 144h], 0
        ; Exact mapped bytes 74 55: je 0x586f5993
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 144h]
        mov dword ptr [ebp - 0d0h], ecx
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x586f597c
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 254h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5986
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 144h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 148h], 0
        ; Exact mapped bytes 74 55: je 0x586f59f4
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 148h]
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x586f59dd
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 25ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f59e7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 148h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14ch], 0
        ; Exact mapped bytes 74 55: je 0x586f5a55
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14ch]
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x586f5a3e
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 264h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586f5a48
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14ch], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 FE 0B 00: call 0x587b58b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0x0b
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
