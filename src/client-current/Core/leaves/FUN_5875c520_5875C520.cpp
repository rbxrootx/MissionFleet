// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875C520 .. +0x1424 bytes.
extern "C" __declspec(naked) void FUN_5875c520_5875C520() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888fd20h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 250h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b541ch
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 12b0h], 0
        ; Exact mapped bytes 74 49: je 0x5875c5a9
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12b0h]
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x5875c592
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0d8h], eax
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 28 FF FF FF: call dword ptr [ebp - 0xd8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c59c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0dch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12b0h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 116ch], 0
        ; Exact mapped bytes 74 49: je 0x5875c5fe
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 116ch]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x5875c5e7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0e0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 20 FF FF FF: call dword ptr [ebp - 0xe0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0e4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c5f1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0e4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 116ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1168h], 0
        ; Exact mapped bytes 74 49: je 0x5875c653
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1168h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x5875c63c
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0e8h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 18 FF FF FF: call dword ptr [ebp - 0xe8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c646
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ech], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1168h], 0
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 78 83 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EC 0D 00 00: je 0x5875d45c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5e84h], 0
        ; Exact mapped bytes 74 49: je 0x5875c6c5
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5e84h]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x5875c6ae
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 10 FF FF FF: call dword ptr [ebp - 0xf0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c6b8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5e84h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5f34h], 0
        ; Exact mapped bytes 74 49: je 0x5875c71a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 5f34h]
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x5875c703
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0f8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 08 FF FF FF: call dword ptr [ebp - 0xf8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c70d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0fch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 5f34h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 12d0h], 0
        ; Exact mapped bytes 74 49: je 0x5875c76f
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 12d0h]
        mov dword ptr [ebp - 30h], edx
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x5875c758
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 100h], edx
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 00 FF FF FF: call dword ptr [ebp - 0x100]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 104h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c762
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 104h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 12d0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 12cch], 0
        ; Exact mapped bytes 74 49: je 0x5875c7c4
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 12cch]
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x5875c7ad
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 108h], eax
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 F8 FE FF FF: call dword ptr [ebp - 0x108]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c7b7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 10ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 12cch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 12c8h], 0
        ; Exact mapped bytes 74 49: je 0x5875c819
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 12c8h]
        mov dword ptr [ebp - 38h], ecx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x5875c802
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 110h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 F0 FE FF FF: call dword ptr [ebp - 0x110]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c80c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 12c8h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5f58h], 0
        ; Exact mapped bytes 74 49: je 0x5875c86e
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f58h]
        mov dword ptr [ebp - 3ch], edx
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x5875c857
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 118h], edx
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 E8 FE FF FF: call dword ptr [ebp - 0x118]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 11ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c861
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 11ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5f58h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 115ch], 0
        ; Exact mapped bytes 74 49: je 0x5875c8c3
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 115ch]
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x5875c8ac
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 120h], eax
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 E0 FE FF FF: call dword ptr [ebp - 0x120]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 124h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c8b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 124h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 115ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1160h], 0
        ; Exact mapped bytes 74 49: je 0x5875c918
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1160h]
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x5875c901
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 128h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 D8 FE FF FF: call dword ptr [ebp - 0x128]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c90b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 12ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1160h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5e7ch], 0
        ; Exact mapped bytes 74 49: je 0x5875c96d
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5e7ch]
        mov dword ptr [ebp - 48h], edx
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x5875c956
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 130h], edx
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 134h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c960
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 134h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5e7ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5e80h], 0
        ; Exact mapped bytes 74 49: je 0x5875c9c2
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5e80h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x5875c9ab
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 138h], eax
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 C8 FE FF FF: call dword ptr [ebp - 0x138]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 13ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875c9b5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 13ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5e80h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx + 1150h], 0
        ; Exact mapped bytes 74 5B: je 0x5875ca32
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x5875ca12
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 140h], eax
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 C0 FE FF FF: call dword ptr [ebp - 0x140]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 144h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ca1c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 144h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx + 1150h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx + 1150h], 0
        ; Exact mapped bytes 74 5B: je 0x5875caa2
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx + 1150h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x5875ca82
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 148h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 B8 FE FF FF: call dword ptr [ebp - 0x148]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ca8c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 14ch], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx + 1150h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 114ch], 0
        ; Exact mapped bytes 74 49: je 0x5875caf7
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 114ch]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x5875cae0
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 150h], eax
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 B0 FE FF FF: call dword ptr [ebp - 0x150]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 154h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875caea
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 154h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 114ch], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1148h], 0
        ; Exact mapped bytes 74 49: je 0x5875cb4c
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1148h]
        mov dword ptr [ebp - 5ch], ecx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x5875cb35
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 5ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 158h], ecx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 A8 FE FF FF: call dword ptr [ebp - 0x158]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 15ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cb3f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 15ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1148h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1164h], 0
        ; Exact mapped bytes 74 49: je 0x5875cba1
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1164h]
        mov dword ptr [ebp - 60h], edx
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x5875cb8a
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 160h], edx
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 A0 FE FF FF: call dword ptr [ebp - 0x160]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 164h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cb94
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 164h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1164h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1118h], 0
        ; Exact mapped bytes 74 49: je 0x5875cbf6
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1118h]
        mov dword ptr [ebp - 64h], eax
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x5875cbdf
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 64h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 168h], eax
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 98 FE FF FF: call dword ptr [ebp - 0x168]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cbe9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 16ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1118h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 111ch], 0
        ; Exact mapped bytes 74 49: je 0x5875cc4b
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 111ch]
        mov dword ptr [ebp - 68h], ecx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x5875cc34
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 170h], ecx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 90 FE FF FF: call dword ptr [ebp - 0x170]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cc3e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 174h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 111ch], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1110h], 0
        ; Exact mapped bytes 74 49: je 0x5875cca0
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1110h]
        mov dword ptr [ebp - 6ch], edx
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x5875cc89
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 6ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 178h], edx
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 88 FE FF FF: call dword ptr [ebp - 0x178]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x88
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 17ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cc93
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 17ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1110h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1114h], 0
        ; Exact mapped bytes 74 49: je 0x5875ccf5
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1114h]
        mov dword ptr [ebp - 70h], eax
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x5875ccde
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 180h], eax
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 80 FE FF FF: call dword ptr [ebp - 0x180]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 184h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cce8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 184h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1114h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1120h], 0
        ; Exact mapped bytes 74 49: je 0x5875cd4a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1120h]
        mov dword ptr [ebp - 74h], ecx
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x5875cd33
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 74h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 188h], ecx
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 78 FE FF FF: call dword ptr [ebp - 0x188]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cd3d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 18ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1120h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1124h], 0
        ; Exact mapped bytes 74 49: je 0x5875cd9f
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1124h]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x5875cd88
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 190h], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 70 FE FF FF: call dword ptr [ebp - 0x190]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 194h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cd92
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 194h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1124h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1130h], 0
        ; Exact mapped bytes 74 49: je 0x5875cdf4
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1130h]
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x5875cddd
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 198h], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 68 FE FF FF: call dword ptr [ebp - 0x198]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 19ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cde7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 19ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1130h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1134h], 0
        ; Exact mapped bytes 74 49: je 0x5875ce49
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1134h]
        mov dword ptr [ebp - 80h], ecx
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x5875ce32
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1a0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 60 FE FF FF: call dword ptr [ebp - 0x1a0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ce3c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1134h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 178h], 0
        ; Exact mapped bytes 74 55: je 0x5875ceaa
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 178h]
        mov dword ptr [ebp - 84h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x5875ce93
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1a8h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 58 FE FF FF: call dword ptr [ebp - 0x1a8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ach], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875ce9d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ach], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 178h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1140h], 0
        ; Exact mapped bytes 74 55: je 0x5875cf0b
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1140h]
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x5875cef4
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1b0h], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 50 FE FF FF: call dword ptr [ebp - 0x1b0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cefe
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b4h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1140h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1144h], 0
        ; Exact mapped bytes 74 55: je 0x5875cf6c
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1144h]
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x5875cf55
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1b8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 48 FE FF FF: call dword ptr [ebp - 0x1b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1bch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cf5f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1bch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1144h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5f5ch], 0
        ; Exact mapped bytes 74 55: je 0x5875cfcd
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 5f5ch]
        mov dword ptr [ebp - 90h], edx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x5875cfb6
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1c0h], edx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 40 FE FF FF: call dword ptr [ebp - 0x1c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875cfc0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 5f5ch], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5f60h], 0
        ; Exact mapped bytes 74 55: je 0x5875d02e
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 5f60h]
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x5875d017
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1c8h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 38 FE FF FF: call dword ptr [ebp - 0x1c8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x38
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1cch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d021
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1cch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 5f60h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 A4 79 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x79
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5875d127
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875d056
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 7C 79 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x79
        __asm _emit 0xd2
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0A: mov ax, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 07: and ax, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x07
        movzx ecx, ax
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 7D 72: jge 0x5875d0e6
        __asm _emit 0x7d
        __asm _emit 0x72
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + edx*4 + 5f38h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d0e1
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 5f38h]
        mov dword ptr [ebp - 98h], eax
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x5875d0c6
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 98h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 30 FE FF FF: call dword ptr [ebp - 0x1d0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d0d0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d4h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + ecx*4 + 5f38h], 0
        ; Exact mapped bytes E9 67 FF FF FF: jmp 0x5875d04d
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 80 75 94 58 00: cmp dword ptr [0x58947580], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x5875d127
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 E3 78 D2 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x78
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, 2
        imul edx, ecx, 0
        movzx eax, word ptr [eax + edx + 18h]
        mov dword ptr [ebp - 1d8h], eax
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 96 FF FF: call 0x58756730
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E1 30 00 00: call 0x58760210
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 5eech], 40000h
        ; Exact mapped bytes 74 1E: je 0x5875d15d
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 5eech], 50000h
        ; Exact mapped bytes 74 0F: je 0x5875d15d
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 5eech], 60000h
        ; Exact mapped bytes 75 4D: jne 0x5875d1aa
        __asm _emit 0x75
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 DB 38 00 00: call 0x58760a40
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A3 36 00 00: call 0x58760810
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0B 32 00 00: call 0x58760380
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 63 38 00 00: call 0x587609e0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 98 D2 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x98
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 1C: jne 0x5875d1aa
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes 83 3D 10 06 96 58 00: cmp dword ptr [0x58960610], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 13: je 0x5875d1aa
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 3A DF FF: call 0x58550bf0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x3a
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D7 3D DF FF: call 0x58550f80
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875d1bc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 24h
        ; Exact mapped bytes 7D 57: jge 0x5875d219
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 0b4h], 0
        ; Exact mapped bytes 74 45: je 0x5875d217
        __asm _emit 0x74
        __asm _emit 0x45
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 0b4h], 0
        ; Exact mapped bytes 74 35: je 0x5875d217
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 1dch], ecx
        push 1
        mov edx, dword ptr [ebp - 1dch]
        push edx
        ; Exact mapped bytes E8 31 3E 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3e
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 0b4h], 0
        ; Exact mapped bytes EB 9A: jmp 0x5875d1b3
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 144h], 0
        ; Exact mapped bytes 74 39: je 0x5875d25e
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 144h], 0
        ; Exact mapped bytes 74 2D: je 0x5875d25e
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 144h]
        mov dword ptr [ebp - 1e0h], edx
        push 1
        mov eax, dword ptr [ebp - 1e0h]
        push eax
        ; Exact mapped bytes E8 E6 3D 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 144h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 154h], 0
        ; Exact mapped bytes 74 2D: je 0x5875d297
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 1e4h], ecx
        push 1
        mov edx, dword ptr [ebp - 1e4h]
        push edx
        ; Exact mapped bytes E8 AD 3D 0D 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x3d
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 154h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 1158h], 0
        ; Exact mapped bytes 74 55: je 0x5875d2f8
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 1158h]
        mov dword ptr [ebp - 9ch], eax
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x5875d2e1
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 9ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1e8h], eax
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 18 FE FF FF: call dword ptr [ebp - 0x1e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ech], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d2eb
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1ech], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 1158h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 1170h], 0
        ; Exact mapped bytes 74 55: je 0x5875d359
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 1170h]
        mov dword ptr [ebp - 0a0h], ecx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x5875d342
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 10 FE FF FF: call dword ptr [ebp - 0x1f0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f4h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d34c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f4h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 1170h], 0
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875d36b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 1174h]
        ; Exact mapped bytes 0F 83 DF 00 00 00: jae 0x5875d45c
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 1178h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d3ea
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 1178h]
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x5875d3cf
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1f8h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 08 FE FF FF: call dword ptr [ebp - 0x1f8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1fch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d3d9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1fch], 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 1178h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 1188h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d457
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 1188h]
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x5875d43c
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 200h], edx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 00 FE FF FF: call dword ptr [ebp - 0x200]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 204h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d446
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 204h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 1188h], 0
        ; Exact mapped bytes E9 06 FF FF FF: jmp 0x5875d362
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 74 55: je 0x5875d4bd
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x5875d4a6
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 208h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 F8 FD FF FF: call dword ptr [ebp - 0x208]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d4b0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 20ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 1128h], 0
        ; Exact mapped bytes 74 55: je 0x5875d51e
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 1128h]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x5875d507
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 210h], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 F0 FD FF FF: call dword ptr [ebp - 0x210]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 214h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d511
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 214h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 1128h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 112ch], 0
        ; Exact mapped bytes 74 55: je 0x5875d57f
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 112ch]
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x5875d568
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0b4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 218h], eax
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 E8 FD FF FF: call dword ptr [ebp - 0x218]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 21ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d572
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 21ch], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 112ch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875d591
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x5875d67a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 6370h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d608
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 6370h]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x5875d5ed
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 220h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 E0 FD FF FF: call dword ptr [ebp - 0x220]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 224h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d5f7
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 224h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 6370h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 6388h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d675
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 6388h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x5875d65a
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 228h], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 D8 FD FF FF: call dword ptr [ebp - 0x228]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 22ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d664
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 22ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 6388h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x5875d588
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5875d68c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 40h
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x5875d775
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + eax*4 + 6244h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d703
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + edx*4 + 6244h]
        mov dword ptr [ebp - 0c0h], ecx
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x5875d6e8
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 230h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 D0 FD FF FF: call dword ptr [ebp - 0x230]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 234h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d6f2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 234h], 0
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + edx*4 + 6244h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + ecx*4 + 6224h], 0
        ; Exact mapped bytes 74 5D: je 0x5875d770
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 6224h]
        mov dword ptr [ebp - 0c4h], edx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x5875d755
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 238h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 C8 FD FF FF: call dword ptr [ebp - 0x238]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 23ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d75f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 23ch], 0
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 6224h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x5875d683
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 11c4h], 0
        ; Exact mapped bytes 74 55: je 0x5875d7d6
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11c4h]
        mov dword ptr [ebp - 0c8h], ecx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x5875d7bf
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 240h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 C0 FD FF FF: call dword ptr [ebp - 0x240]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 244h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d7c9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 244h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 11c4h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 11c0h], 0
        ; Exact mapped bytes 74 55: je 0x5875d837
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 11c0h]
        mov dword ptr [ebp - 0cch], edx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x5875d820
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 248h], edx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 B8 FD FF FF: call dword ptr [ebp - 0x248]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d82a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 24ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 11c0h], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 11c8h], 0
        ; Exact mapped bytes 74 55: je 0x5875d898
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 11c8h]
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x5875d881
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 250h], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 B0 FD FF FF: call dword ptr [ebp - 0x250]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 254h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d88b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 254h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 11c8h], 0
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 11cch], 0
        ; Exact mapped bytes 74 55: je 0x5875d8f9
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 11cch]
        mov dword ptr [ebp - 0d4h], ecx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x5875d8e2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0d4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 258h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 A8 FD FF FF: call dword ptr [ebp - 0x258]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 25ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5875d8ec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 25ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 11cch], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 12b4h
        ; Exact mapped bytes E8 D9 9E D2 FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xd2
        __asm _emit 0xff
        push 5875c4d0h
        push 8
        push 10h
        mov eax, dword ptr [ebp - 10h]
        add eax, 11f4h
        push eax
        ; Exact mapped bytes E8 DB 43 0D 00: call 0x58831cf9
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x43
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 34ch
        ; Exact mapped bytes E8 14 17 FF FF: call 0x5874f040
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4C 61 E2 FF: call 0x58583a80
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x61
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
