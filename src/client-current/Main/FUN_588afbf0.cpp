// Complete Ghidra body ranges for the selected function.
// 5 discontiguous segments; total 3159 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AFBF0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_588afbf0_segment_00() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4]
        add eax, dword ptr [esi + 1e70h]
        mov ecx, dword ptr [esi + 68h]
        push edi
        push eax
        ; Exact mapped bytes E8 D8 36 05 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 258h
        push 320h
        ; Exact mapped bytes E8 73 36 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        lea edi, [esi + 20f8h]
        mov ebx, 64h
        ; Exact mapped bytes EB 06: jmp 0x588afc30
        __asm _emit 0xeb
        __asm _emit 0x06
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AFC30 .. +0x639 bytes.
extern "C" __declspec(naked) void FUN_588afbf0_segment_01() {
    __asm {
        mov ecx, dword ptr [edi]
        push 258h
        push 320h
        ; Exact mapped bytes E8 4F 36 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x588afc30
        __asm _emit 0x75
        __asm _emit 0xe7
        lea edi, [esi + 8ch]
        mov ebx, 8
        mov ecx, dword ptr [edi]
        push 258h
        push 320h
        ; Exact mapped bytes E8 2B 36 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 E7: jne 0x588afc54
        __asm _emit 0x75
        __asm _emit 0xe7
        lea ebx, [esi + 2418h]
        lea edi, [esi + 238h]
        mov ebp, 3
        mov edi, edi
        mov ecx, dword ptr [edi + 4]
        add ecx, dword ptr [esi + 1e74h]
        mov edx, dword ptr [esi + 4]
        add ecx, dword ptr [esi + 8]
        add edx, dword ptr [edi]
        push ecx
        add edx, dword ptr [esi + 1e70h]
        mov ecx, dword ptr [ebx]
        push edx
        ; Exact mapped bytes E8 F0 35 05 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x35
        __asm _emit 0x05
        __asm _emit 0x00
        add ebx, 4
        add edi, 8
        sub ebp, 1
        ; Exact mapped bytes 75 D5: jne 0x588afc80
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 0F 84 6A 0A 00 00: je 0x588b071f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], ebp
        ; Exact mapped bytes 7E 12: jle 0x588afcd4
        __asm _emit 0x7e
        __asm _emit 0x12
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0A: je 0x588afcd4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588afcd6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afd08
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8fh
        ; Exact mapped bytes 7E 16: jle 0x588afd2f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588afd2f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 23ch]
        ; Exact mapped bytes EB 02: jmp 0x588afd31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 64h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afd63
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 68h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 6ch]
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0eh
        ; Exact mapped bytes 7E 15: jle 0x588afd92
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588afd92
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 380h
        ; Exact mapped bytes EB 02: jmp 0x588afd94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afdc6
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ch
        ; Exact mapped bytes 7E 15: jle 0x588afde9
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588afde9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 300h
        ; Exact mapped bytes EB 02: jmp 0x588afdeb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afe1d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0dh
        ; Exact mapped bytes 7E 15: jle 0x588afe40
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588afe40
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 340h
        ; Exact mapped bytes EB 02: jmp 0x588afe42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afe74
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 15: jle 0x588afe97
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588afe97
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x588afe99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588afecb
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ah
        ; Exact mapped bytes 7E 15: jle 0x588afeee
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588afeee
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 280h
        ; Exact mapped bytes EB 02: jmp 0x588afef0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 80h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588aff25
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B8 46 A2 58: mov eax, dword ptr [0x58a246b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 8eh
        ; Exact mapped bytes 7E 16: jle 0x588aff4c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588aff4c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 238h]
        ; Exact mapped bytes EB 02: jmp 0x588aff4e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588aff83
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 13h
        ; Exact mapped bytes 7E 13: jle 0x588affa4
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588affa4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 4ch]
        ; Exact mapped bytes EB 02: jmp 0x588affa6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2418h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588affdb
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 14h
        ; Exact mapped bytes 7E 13: jle 0x588afffc
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588afffc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 50h]
        ; Exact mapped bytes EB 02: jmp 0x588afffe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 241ch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b0033
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 15h
        ; Exact mapped bytes 7E 13: jle 0x588b0054
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588b0054
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 54h]
        ; Exact mapped bytes EB 02: jmp 0x588b0056
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2420h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b008b
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 8
        ; Exact mapped bytes 7E 15: jle 0x588b00ae
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp dword ptr [eax + 190h], ebp
        ; Exact mapped bytes 74 0D: je 0x588b00ae
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 200h
        ; Exact mapped bytes EB 02: jmp 0x588b00b0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2470h]
        mov dword ptr [ecx + 54h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b00e5
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 2470h]
        mov dword ptr [ecx + 50h], 6
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 81h
        ; Exact mapped bytes 7E 16: jle 0x588b0119
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b0119
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx + 204h]
        ; Exact mapped bytes EB 02: jmp 0x588b011b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b0150
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 3
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x588b0175
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588b0175
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x588b0177
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2424h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b01ac
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x588b01cc
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588b01cc
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x588b01ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 2428h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b0204
        __asm _emit 0x74
        __asm _emit 0x29
        mov edi, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edi
        mov edi, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edi
        mov edi, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 13: jle 0x588b0224
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588b0224
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 02: jmp 0x588b0226
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 242ch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b025c
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        lea eax, [esi + 2288h]
        mov ecx, 64h
        ; Exact mapped bytes EB 07: jmp 0x588b0270
        __asm _emit 0xeb
        __asm _emit 0x07
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B0270 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_588afbf0_segment_02() {
    __asm {
        mov edx, dword ptr [eax - 190h]
        mov dword ptr [edx + 54h], ebp
        mov edx, dword ptr [eax]
        add eax, 4
        sub ecx, 1
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes 75 EA: jne 0x588b0270
        __asm _emit 0x75
        __asm _emit 0xea
        lea edx, [esi + 90h]
        lea ebx, [ecx + 2]
        mov edi, 82h
        ; Exact mapped bytes EB 0A: jmp 0x588b02a0
        __asm _emit 0xeb
        __asm _emit 0x0a
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B02A0 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_588afbf0_segment_03() {
    __asm {
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b02c3
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b02c3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax + 208h]
        ; Exact mapped bytes EB 02: jmp 0x588b02c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx - 4]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 2B: je 0x588b02fa
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b031d
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b031d
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 208h]
        ; Exact mapped bytes EB 02: jmp 0x588b031f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 2B: je 0x588b0353
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b0376
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b0376
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 208h]
        ; Exact mapped bytes EB 02: jmp 0x588b0378
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 2B: je 0x588b03ad
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edi
        ; Exact mapped bytes 7E 16: jle 0x588b03d0
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b03d0
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 208h]
        ; Exact mapped bytes EB 02: jmp 0x588b03d2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 2B: je 0x588b0407
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ebp, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebp
        mov ebp, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebp
        mov ebp, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebp
        mov ebp, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebp
        mov ebp, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebp
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebp, ebp
        add edx, 10h
        sub ebx, 1
        ; Exact mapped bytes 0F 85 8D FE FF FF: jne 0x588b02a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 6bh
        mov edi, 1ach
        add esi, 2434h
        mov dword ptr [esp + 14h], 2
        ; Exact mapped bytes EB 03: jmp 0x588b0430
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B0430 .. +0x431 bytes.
extern "C" __declspec(naked) void FUN_588afbf0_segment_04() {
    __asm {
        ; Exact mapped bytes 8B 0D B4 46 A2 58: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edx - 1]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588b0459
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp eax, ebp
        ; Exact mapped bytes 7C 14: jl 0x588b0459
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0C: je 0x588b0459
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edi + ecx - 4]
        ; Exact mapped bytes EB 02: jmp 0x588b045b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi - 4]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b048d
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 72h
        ; Exact mapped bytes 7E 16: jle 0x588b04b1
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b04b1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b04b3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 28: je 0x588b04e4
        __asm _emit 0x74
        __asm _emit 0x28
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], edx
        ; Exact mapped bytes 7E 17: jle 0x588b0508
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp edx, ebp
        ; Exact mapped bytes 7C 13: jl 0x588b0508
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0B: je 0x588b0508
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edi + ecx]
        ; Exact mapped bytes EB 02: jmp 0x588b050a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b053d
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 72h
        ; Exact mapped bytes 7E 16: jle 0x588b0561
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b0561
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b0563
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 8]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b0596
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D B4 46 A2 58: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edx + 1]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588b05bf
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp eax, ebp
        ; Exact mapped bytes 7C 14: jl 0x588b05bf
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0C: je 0x588b05bf
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edi + ecx + 4]
        ; Exact mapped bytes EB 02: jmp 0x588b05c1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0ch]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b05f4
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 72h
        ; Exact mapped bytes 7E 16: jle 0x588b0618
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b0618
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b061a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 10h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b064d
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 8B 0D B4 46 A2 58: mov ecx, dword ptr [0x58a246b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [edx + 2]
        cmp dword ptr [ecx + 164h], eax
        ; Exact mapped bytes 7E 18: jle 0x588b0676
        __asm _emit 0x7e
        __asm _emit 0x18
        cmp eax, ebp
        ; Exact mapped bytes 7C 14: jl 0x588b0676
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 18ch], ebp
        ; Exact mapped bytes 74 0C: je 0x588b0676
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ecx + 18ch]
        mov eax, dword ptr [edi + ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x588b0678
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 14h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b06ab
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes A1 B4 46 A2 58: mov eax, dword ptr [0x58a246b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 72h
        ; Exact mapped bytes 7E 16: jle 0x588b06cf
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebp
        ; Exact mapped bytes 74 0E: je 0x588b06cf
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx + 1c8h]
        ; Exact mapped bytes EB 02: jmp 0x588b06d1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 18h]
        mov dword ptr [ecx + 50h], eax
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x588b0704
        __asm _emit 0x74
        __asm _emit 0x29
        mov ebx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], ebx
        mov ebx, dword ptr [eax + 14h]
        mov dword ptr [ecx + 10h], ebx
        mov ebx, dword ptr [eax + 18h]
        add eax, 18h
        add ecx, 14h
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], ebx
        mov ebx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], ebx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        add edi, 10h
        add edx, 4
        add esi, 20h
        sub dword ptr [esp + 14h], 1
        ; Exact mapped bytes 0F 85 18 FD FF FF: jne 0x588b0430
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 64h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 68h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 6ch]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [edx + 54h], ebp
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 54h], ebp
        mov edx, dword ptr [esi + 7ch]
        mov dword ptr [edx + 54h], ebp
        mov eax, dword ptr [esi + 80h]
        mov dword ptr [eax + 54h], ebp
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 2470h]
        mov dword ptr [edx + 54h], ebp
        mov eax, dword ptr [esi + 88h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 2418h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 2424h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 241ch]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 2428h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 2420h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 242ch]
        mov dword ptr [eax + 50h], ebp
        lea eax, [esi + 2288h]
        mov ecx, 64h
        mov edx, dword ptr [eax - 190h]
        mov dword ptr [edx + 54h], ebp
        mov edx, dword ptr [eax]
        add eax, 4
        sub ecx, 1
        mov dword ptr [edx + 50h], ebp
        ; Exact mapped bytes 75 EA: jne 0x588b07b4
        __asm _emit 0x75
        __asm _emit 0xea
        mov eax, dword ptr [esi + 8ch]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 90h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 94h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 98h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 9ch]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 0a0h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 0a4h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 0a8h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 2430h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 2434h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 2438h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 243ch]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 2440h]
        mov dword ptr [eax + 50h], ebp
        mov ecx, dword ptr [esi + 2444h]
        mov dword ptr [ecx + 50h], ebp
        mov edx, dword ptr [esi + 2448h]
        mov dword ptr [edx + 50h], ebp
        mov eax, dword ptr [esi + 244ch]
        pop edi
        pop esi
        mov dword ptr [eax + 50h], ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
