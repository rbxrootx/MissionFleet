// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A2020 .. +0x16AB bytes.
extern "C" __declspec(naked) void FUN_586a2020_586A2020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2a0h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b0a48h
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 2b8h], 0
        ; Exact mapped bytes 74 5B: je 0x586a20a5
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, 4
        imul edx, ecx, 7
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 2b8h]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 20: je 0x586a2085
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 95 14 FF FF FF: call dword ptr [ebp - 0xec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a208f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f0h], 0
        mov edx, 4
        imul eax, edx, 7
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 2b8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 320h], 0
        ; Exact mapped bytes 74 49: je 0x586a20fa
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 320h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x586a20e3
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0f4h], ecx
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 95 0C FF FF FF: call dword ptr [ebp - 0xf4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a20ed
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0f8h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 320h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 31ch], 0
        ; Exact mapped bytes 74 49: je 0x586a214f
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 31ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 20: je 0x586a2138
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0fch], edx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 95 04 FF FF FF: call dword ptr [ebp - 0xfc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 100h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2142
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 100h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 31ch], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586a2161
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 7
        ; Exact mapped bytes 0F 8D 6A 01 00 00: jge 0x586a22d5
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 2e4h]
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 74 67: je 0x586a21ed
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 2e4h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 20: je 0x586a21c7
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 104h], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 95 FC FE FF FF: call dword ptr [ebp - 0x104]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a21d1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 108h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 2e4h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 2e4h]
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx], 0
        ; Exact mapped bytes 74 67: je 0x586a226f
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 2e4h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        mov dword ptr [ebp - 20h], ecx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 20: je 0x586a2249
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 95 F4 FE FF FF: call dword ptr [ebp - 0x10c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2253
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 110h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 2e4h]
        mov edx, 4
        imul eax, edx, 0
        mov dword ptr [ecx + eax], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 2b8h], 0
        ; Exact mapped bytes 74 51: je 0x586a22d0
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 2b8h]
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 20: je 0x586a22b5
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 114h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 95 EC FE FF FF: call dword ptr [ebp - 0x114]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a22bf
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 2b8h], 0
        ; Exact mapped bytes E9 83 FE FF FF: jmp 0x586a2158
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2d8h], 0
        ; Exact mapped bytes 74 49: je 0x586a232a
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2d8h]
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 20: je 0x586a2313
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 11ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 95 E4 FE FF FF: call dword ptr [ebp - 0x11c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 120h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a231d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 120h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2d8h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 2b0h], 0
        ; Exact mapped bytes 74 5B: je 0x586a239a
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 2b0h]
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 20: je 0x586a237a
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 124h], eax
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 95 DC FE FF FF: call dword ptr [ebp - 0x124]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 128h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2384
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 128h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 2b0h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2e0h], 0
        ; Exact mapped bytes 74 49: je 0x586a23ef
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2e0h]
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 20: je 0x586a23d8
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 12ch], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes FF 95 D4 FE FF FF: call dword ptr [ebp - 0x12c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 130h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a23e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 130h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2e0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2dch], 0
        ; Exact mapped bytes 74 49: je 0x586a2444
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2dch]
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 20: je 0x586a242d
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 134h], ecx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 138h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2437
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 138h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2dch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 2a8h], 0
        ; Exact mapped bytes 74 49: je 0x586a2499
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 2a8h]
        mov dword ptr [ebp - 38h], edx
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 20: je 0x586a2482
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 13ch], edx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 95 C4 FE FF FF: call dword ptr [ebp - 0x13c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a248c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 140h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2a8h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 2ach], 0
        ; Exact mapped bytes 74 49: je 0x586a24ee
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ach]
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 20: je 0x586a24d7
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 3ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 144h], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes FF 95 BC FE FF FF: call dword ptr [ebp - 0x144]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 148h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a24e1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 148h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ach], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2a4h], 0
        ; Exact mapped bytes 74 49: je 0x586a2543
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2a4h]
        mov dword ptr [ebp - 40h], ecx
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 20: je 0x586a252c
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 95 B4 FE FF FF: call dword ptr [ebp - 0x14c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 150h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2536
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 150h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2a4h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1a4h], 0
        ; Exact mapped bytes 74 49: je 0x586a2598
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1a4h]
        mov dword ptr [ebp - 44h], edx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 20: je 0x586a2581
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 154h], edx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 95 AC FE FF FF: call dword ptr [ebp - 0x154]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 158h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a258b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 158h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1a4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], 0
        ; Exact mapped bytes 74 49: je 0x586a25ed
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        mov dword ptr [ebp - 48h], eax
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 74 20: je 0x586a25d6
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 48h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 15ch], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes FF 95 A4 FE FF FF: call dword ptr [ebp - 0x15c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 160h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a25e0
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 160h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 74 49: je 0x586a2642
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 4ch], ecx
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 20: je 0x586a262b
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 164h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes FF 95 9C FE FF FF: call dword ptr [ebp - 0x164]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2635
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 168h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ach], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 49: je 0x586a2697
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov dword ptr [ebp - 50h], edx
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 74 20: je 0x586a2680
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 16ch], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes FF 95 94 FE FF FF: call dword ptr [ebp - 0x16c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a268a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 170h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 0
        ; Exact mapped bytes 74 49: je 0x586a26ec
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 20: je 0x586a26d5
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 54h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 174h], eax
        push 1
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes FF 95 8C FE FF FF: call dword ptr [ebp - 0x174]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 178h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a26df
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 178h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 98h], 0
        ; Exact mapped bytes 74 49: je 0x586a2741
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 98h]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 20: je 0x586a272a
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 17ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes FF 95 84 FE FF FF: call dword ptr [ebp - 0x17c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 180h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2734
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 180h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 98h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 9ch], 0
        ; Exact mapped bytes 74 49: je 0x586a2796
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [ebp - 5ch], edx
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 20: je 0x586a277f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 5ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 184h], edx
        push 1
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes FF 95 7C FE FF FF: call dword ptr [ebp - 0x184]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 188h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2789
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 188h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 9ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 74 49: je 0x586a27eb
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        mov dword ptr [ebp - 60h], eax
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 74 20: je 0x586a27d4
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 18ch], eax
        push 1
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes FF 95 74 FE FF FF: call dword ptr [ebp - 0x18c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 190h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a27de
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 190h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b0h], 0
        ; Exact mapped bytes 74 49: je 0x586a2840
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 20: je 0x586a2829
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 64h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 194h], ecx
        push 1
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 95 6C FE FF FF: call dword ptr [ebp - 0x194]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 198h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2833
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 198h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 74 49: je 0x586a2895
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 68h], edx
        cmp dword ptr [ebp - 68h], 0
        ; Exact mapped bytes 74 20: je 0x586a287e
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 68h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 19ch], edx
        push 1
        mov ecx, dword ptr [ebp - 68h]
        ; Exact mapped bytes FF 95 64 FE FF FF: call dword ptr [ebp - 0x19c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2888
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a0h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0a0h], 0
        ; Exact mapped bytes 74 49: je 0x586a28ea
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 20: je 0x586a28d3
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1a4h], eax
        push 1
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes FF 95 5C FE FF FF: call dword ptr [ebp - 0x1a4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1a8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a28dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1a8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0a0h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 74 49: je 0x586a293f
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        mov dword ptr [ebp - 70h], ecx
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 74 20: je 0x586a2928
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ach], ecx
        push 1
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes FF 95 54 FE FF FF: call dword ptr [ebp - 0x1ac]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2932
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0a4h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 198h], 0
        ; Exact mapped bytes 74 5B: je 0x586a29af
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 198h]
        mov dword ptr [ebp - 74h], eax
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 20: je 0x586a298f
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1b4h], eax
        push 1
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes FF 95 4C FE FF FF: call dword ptr [ebp - 0x1b4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2999
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1b8h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 198h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 198h], 0
        ; Exact mapped bytes 74 5B: je 0x586a2a1f
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 198h]
        mov dword ptr [ebp - 78h], edx
        cmp dword ptr [ebp - 78h], 0
        ; Exact mapped bytes 74 20: je 0x586a29ff
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 78h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1bch], edx
        push 1
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes FF 95 44 FE FF FF: call dword ptr [ebp - 0x1bc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2a09
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c0h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 198h], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 198h], 0
        ; Exact mapped bytes 74 59: je 0x586a2a8c
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 198h]
        mov dword ptr [ebp - 7ch], eax
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 20: je 0x586a2a6d
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 7ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1c4h], eax
        push 1
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes FF 95 3C FE FF FF: call dword ptr [ebp - 0x1c4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1c8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2a77
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1c8h], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 198h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 108h], 0
        ; Exact mapped bytes 74 5B: je 0x586a2afc
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 108h]
        mov dword ptr [ebp - 80h], eax
        cmp dword ptr [ebp - 80h], 0
        ; Exact mapped bytes 74 20: je 0x586a2adc
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1cch], eax
        push 1
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes FF 95 34 FE FF FF: call dword ptr [ebp - 0x1cc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2ae6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d0h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 108h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 108h], 0
        ; Exact mapped bytes 74 67: je 0x586a2b78
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 108h]
        mov dword ptr [ebp - 84h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 26: je 0x586a2b58
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 84h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1d4h], edx
        push 1
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes FF 95 2C FE FF FF: call dword ptr [ebp - 0x1d4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x2c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2b62
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1d8h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 108h], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 108h], 0
        ; Exact mapped bytes 74 65: je 0x586a2bf1
        __asm _emit 0x74
        __asm _emit 0x65
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 108h]
        mov dword ptr [ebp - 88h], eax
        cmp dword ptr [ebp - 88h], 0
        ; Exact mapped bytes 74 26: je 0x586a2bd2
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 88h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1dch], eax
        push 1
        mov ecx, dword ptr [ebp - 88h]
        ; Exact mapped bytes FF 95 24 FE FF FF: call dword ptr [ebp - 0x1dc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2bdc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e0h], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 108h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1b4h], 0
        ; Exact mapped bytes 74 55: je 0x586a2c52
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1b4h]
        mov dword ptr [ebp - 8ch], edx
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 74 26: je 0x586a2c3b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 8ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 1e4h], edx
        push 1
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes FF 95 1C FE FF FF: call dword ptr [ebp - 0x1e4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1e8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2c45
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1e8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1b4h], 0
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0f8h], 0
        ; Exact mapped bytes 74 67: je 0x586a2cce
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 90h], ecx
        cmp dword ptr [ebp - 90h], 0
        ; Exact mapped bytes 74 26: je 0x586a2cae
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ech], ecx
        push 1
        mov ecx, dword ptr [ebp - 90h]
        ; Exact mapped bytes FF 95 14 FE FF FF: call dword ptr [ebp - 0x1ec]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2cb8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f0h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0f8h], 0
        ; Exact mapped bytes 74 67: je 0x586a2d4a
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0f8h]
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 74 26: je 0x586a2d2a
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1f4h], eax
        push 1
        mov ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes FF 95 0C FE FF FF: call dword ptr [ebp - 0x1f4]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1f8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2d34
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 1f8h], 0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0f8h], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 0f8h], 0
        ; Exact mapped bytes 74 65: je 0x586a2dc3
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 74 26: je 0x586a2da4
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1fch], ecx
        push 1
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes FF 95 04 FE FF FF: call dword ptr [ebp - 0x1fc]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 200h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2dae
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 200h], 0
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 0f8h], 0
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 0f8h], 0
        ; Exact mapped bytes 74 67: je 0x586a2e3f
        __asm _emit 0x74
        __asm _emit 0x67
        mov ecx, 4
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0f8h]
        mov dword ptr [ebp - 9ch], ecx
        cmp dword ptr [ebp - 9ch], 0
        ; Exact mapped bytes 74 26: je 0x586a2e1f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 204h], ecx
        push 1
        mov ecx, dword ptr [ebp - 9ch]
        ; Exact mapped bytes FF 95 FC FD FF FF: call dword ptr [ebp - 0x204]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 208h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2e29
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 208h], 0
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0f8h], 0
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 1a8h], 0
        ; Exact mapped bytes 74 67: je 0x586a2ebb
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1a8h]
        mov dword ptr [ebp - 0a0h], edx
        cmp dword ptr [ebp - 0a0h], 0
        ; Exact mapped bytes 74 26: je 0x586a2e9b
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 20ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes FF 95 F4 FD FF FF: call dword ptr [ebp - 0x20c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 210h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2ea5
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 210h], 0
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 1a8h], 0
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax + 1a8h], 0
        ; Exact mapped bytes 74 67: je 0x586a2f37
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 1a8h]
        mov dword ptr [ebp - 0a4h], ecx
        cmp dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes 74 26: je 0x586a2f17
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0a4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 214h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes FF 95 EC FD FF FF: call dword ptr [ebp - 0x214]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 218h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2f21
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 218h], 0
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 1a8h], 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 1a8h], 0
        ; Exact mapped bytes 74 65: je 0x586a2fb0
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1a8h]
        mov dword ptr [ebp - 0a8h], edx
        cmp dword ptr [ebp - 0a8h], 0
        ; Exact mapped bytes 74 26: je 0x586a2f91
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0a8h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 21ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes FF 95 E4 FD FF FF: call dword ptr [ebp - 0x21c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 220h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a2f9b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 1a8h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a2fc2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0bh
        ; Exact mapped bytes 0F 8D 68 02 00 00: jge 0x586a3234
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 16ch], 0
        ; Exact mapped bytes 74 5D: je 0x586a3039
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 16ch]
        mov dword ptr [ebp - 0ach], ecx
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 26: je 0x586a301e
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0ach]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 224h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes FF 95 DC FD FF FF: call dword ptr [ebp - 0x224]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 228h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3028
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 228h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 16ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 114h]
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx], 0
        ; Exact mapped bytes 74 73: je 0x586a30c7
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        mov dword ptr [ebp - 0b0h], edx
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 26: je 0x586a30a1
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0b0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 22ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0b0h]
        ; Exact mapped bytes FF 95 D4 FD FF FF: call dword ptr [ebp - 0x22c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 230h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a30ab
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 230h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        cmp dword ptr [ecx + edx], 0
        ; Exact mapped bytes 74 73: je 0x586a3155
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 114h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 0b4h], ecx
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 74 26: je 0x586a312f
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 234h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b4h]
        ; Exact mapped bytes FF 95 CC FD FF FF: call dword ptr [ebp - 0x234]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 238h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3139
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 238h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 114h]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 1b8h], 0
        ; Exact mapped bytes 74 5D: je 0x586a31c2
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 1b8h]
        mov dword ptr [ebp - 0b8h], ecx
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 74 26: je 0x586a31a7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0b8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 23ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0b8h]
        ; Exact mapped bytes FF 95 C4 FD FF FF: call dword ptr [ebp - 0x23c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 240h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a31b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 240h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 1b8h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1e4h], 0
        ; Exact mapped bytes 74 5D: je 0x586a322f
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 1e4h]
        mov dword ptr [ebp - 0bch], edx
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 74 26: je 0x586a3214
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0bch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 244h], edx
        push 1
        mov ecx, dword ptr [ebp - 0bch]
        ; Exact mapped bytes FF 95 BC FD FF FF: call dword ptr [ebp - 0x244]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 248h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a321e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 248h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 1e4h], 0
        ; Exact mapped bytes E9 85 FD FF FF: jmp 0x586a2fb9
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a3246
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 0F 8D DF 00 00 00: jge 0x586a332f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 0b4h], 0
        ; Exact mapped bytes 74 5D: je 0x586a32bd
        __asm _emit 0x74
        __asm _emit 0x5d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 0c0h], ecx
        cmp dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes 74 26: je 0x586a32a2
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c0h]
        ; Exact mapped bytes FF 95 B4 FD FF FF: call dword ptr [ebp - 0x24c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a32ac
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 250h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0b4h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 0d8h], 0
        ; Exact mapped bytes 74 5D: je 0x586a332a
        __asm _emit 0x74
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d8h]
        mov dword ptr [ebp - 0c4h], edx
        cmp dword ptr [ebp - 0c4h], 0
        ; Exact mapped bytes 74 26: je 0x586a330f
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0c4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 254h], edx
        push 1
        mov ecx, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes FF 95 AC FD FF FF: call dword ptr [ebp - 0x254]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xac
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 258h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3319
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 258h], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0d8h], 0
        ; Exact mapped bytes E9 0E FF FF FF: jmp 0x586a323d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 21ch], 0
        ; Exact mapped bytes 74 55: je 0x586a3390
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21ch]
        mov dword ptr [ebp - 0c8h], ecx
        cmp dword ptr [ebp - 0c8h], 0
        ; Exact mapped bytes 74 26: je 0x586a3379
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0c8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 25ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes FF 95 A4 FD FF FF: call dword ptr [ebp - 0x25c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 260h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3383
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 260h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 220h], 0
        ; Exact mapped bytes 74 55: je 0x586a33f1
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 220h]
        mov dword ptr [ebp - 0cch], edx
        cmp dword ptr [ebp - 0cch], 0
        ; Exact mapped bytes 74 26: je 0x586a33da
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 264h], edx
        push 1
        mov ecx, dword ptr [ebp - 0cch]
        ; Exact mapped bytes FF 95 9C FD FF FF: call dword ptr [ebp - 0x264]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x9c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 268h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a33e4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 268h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 220h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586a3403
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 6F: jge 0x586a3478
        __asm _emit 0x7d
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 224h], 0
        ; Exact mapped bytes 74 5D: je 0x586a3476
        __asm _emit 0x74
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 224h]
        mov dword ptr [ebp - 0d0h], eax
        cmp dword ptr [ebp - 0d0h], 0
        ; Exact mapped bytes 74 26: je 0x586a345b
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 26ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes FF 95 94 FD FF FF: call dword ptr [ebp - 0x26c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 270h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3465
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 270h], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 224h], 0
        ; Exact mapped bytes EB 82: jmp 0x586a33fa
        __asm _emit 0xeb
        __asm _emit 0x82
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 218h], 0
        ; Exact mapped bytes 74 55: je 0x586a34d9
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 0d4h], edx
        cmp dword ptr [ebp - 0d4h], 0
        ; Exact mapped bytes 74 26: je 0x586a34c2
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0d4h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 274h], edx
        push 1
        mov ecx, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes FF 95 8C FD FF FF: call dword ptr [ebp - 0x274]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x8c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 278h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a34cc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 278h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 218h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 338h], 0
        ; Exact mapped bytes 74 55: je 0x586a353a
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 338h]
        mov dword ptr [ebp - 0d8h], eax
        cmp dword ptr [ebp - 0d8h], 0
        ; Exact mapped bytes 74 26: je 0x586a3523
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0d8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 27ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes FF 95 84 FD FF FF: call dword ptr [ebp - 0x27c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 280h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a352d
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 280h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 338h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 328h], 0
        ; Exact mapped bytes 74 55: je 0x586a359b
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 328h]
        mov dword ptr [ebp - 0dch], ecx
        cmp dword ptr [ebp - 0dch], 0
        ; Exact mapped bytes 74 26: je 0x586a3584
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 284h], ecx
        push 1
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 95 7C FD FF FF: call dword ptr [ebp - 0x284]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x7c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 288h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a358e
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 288h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 328h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 32ch], 0
        ; Exact mapped bytes 74 55: je 0x586a35fc
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 32ch]
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 0
        ; Exact mapped bytes 74 26: je 0x586a35e5
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 0e0h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 28ch], edx
        push 1
        mov ecx, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes FF 95 74 FD FF FF: call dword ptr [ebp - 0x28c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 290h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a35ef
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 290h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 32ch], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 330h], 0
        ; Exact mapped bytes 74 55: je 0x586a365d
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 330h]
        mov dword ptr [ebp - 0e4h], eax
        cmp dword ptr [ebp - 0e4h], 0
        ; Exact mapped bytes 74 26: je 0x586a3646
        __asm _emit 0x74
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 0e4h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 294h], eax
        push 1
        mov ecx, dword ptr [ebp - 0e4h]
        ; Exact mapped bytes FF 95 6C FD FF FF: call dword ptr [ebp - 0x294]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 298h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a3650
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 298h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 330h], 0
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 334h], 0
        ; Exact mapped bytes 74 55: je 0x586a36be
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 334h]
        mov dword ptr [ebp - 0e8h], ecx
        cmp dword ptr [ebp - 0e8h], 0
        ; Exact mapped bytes 74 26: je 0x586a36a7
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 0e8h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 29ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 0e8h]
        ; Exact mapped bytes FF 95 64 FD FF FF: call dword ptr [ebp - 0x29c]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x64
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 2a0h], eax
        ; Exact mapped bytes EB 0A: jmp 0x586a36b1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 2a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 334h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FA 80 EC FF: call 0x5856b7c0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x80
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
