// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042A122 .. +0x3CA bytes.
extern "C" __declspec(naked) void FUN_0042a122_0042A122() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 70h], ecx
        mov eax, dword ptr [ebp - 70h]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 8D 03 00 00: je 0x42a4d8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 1020304h
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 70h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 0F 85 42 02 00 00: jne 0x42a3b9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        cmp dword ptr [eax + 0e0h], 0
        ; Exact mapped bytes 0F 84 A0 01 00 00: je 0x42a327
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 34h], 14h
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 18h], 0
        cmp dword ptr [ebp - 10h], 8001000fh
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x42a27c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42a1c6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 73 1F: jae 0x42a1ed
        __asm _emit 0x73
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        add ecx, 7
        mov edx, dword ptr [ebp - 3ch]
        imul edx, edx, 1dh
        imul ecx, edx
        mov eax, dword ptr [ebp - 18h]
        add eax, ecx
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB D0: jmp 0x42a1bd
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes EB 09: jmp 0x42a1ff
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        cmp edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 73 1F: jae 0x42a226
        __asm _emit 0x73
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        add ecx, 0bh
        mov edx, dword ptr [ebp - 3ch]
        imul edx, edx, 0dh
        imul ecx, edx
        mov eax, dword ptr [ebp - 18h]
        add eax, ecx
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB D0: jmp 0x42a1f6
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 70h]
        cmp dword ptr [ecx + 0cch], 0
        ; Exact mapped bytes 74 3F: je 0x42a271
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [ebp - 18h]
        imul eax, dword ptr [edx + 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ecx + 0c8h]
        ; Exact mapped bytes E8 72 1F 00 00: call 0x42c1c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 18h]
        xor edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 0d8h]
        add ecx, 0dh
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [edx + 0d8h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x42a27c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 18h]
        xor eax, 0f3a91cd0h
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 1ch], 3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 16: jne 0x42a29f
        __asm _emit 0x75
        __asm _emit 0x16
        mov dword ptr [ebp - 1ch], 2
        lea ecx, [ebp - 18h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes EB 0D: jmp 0x42a2ac
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea edx, [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 24h], 4
        mov esi, esp
        push 0
        mov eax, dword ptr [ebp - 70h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 38 C1 68 00: call dword ptr [0x68c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 15 AB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 42: jne 0x42a322
        __asm _emit 0x75
        __asm _emit 0x42
        mov esi, esp
        ; Exact mapped bytes FF 15 8C C1 68 00: call dword ptr [0x68c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 01 AB 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xab
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 3e5h
        ; Exact mapped bytes 75 02: jne 0x42a2fd
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x42a322
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp - 44h], 2747h
        ; Exact mapped bytes 74 09: je 0x42a30f
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 44h], 274ah
        ; Exact mapped bytes 75 13: jne 0x42a322
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 FC 16 00 00: call 0x42ba17
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 B8 01 00 00: jmp 0x42a4da
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x42a3b4
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 14h]
        mov dword ptr [ebp - 50h], edx
        mov dword ptr [ebp - 54h], 14h
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 4ch], ecx
        mov esi, esp
        push 0
        mov edx, dword ptr [ebp - 70h]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        lea ecx, [ebp - 58h]
        push ecx
        push 2
        lea edx, [ebp - 54h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 38 C1 68 00: call dword ptr [0x68c138]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 83 AA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 42: jne 0x42a3b4
        __asm _emit 0x75
        __asm _emit 0x42
        mov esi, esp
        ; Exact mapped bytes FF 15 8C C1 68 00: call dword ptr [0x68c18c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F AA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 5ch], eax
        cmp dword ptr [ebp - 5ch], 3e5h
        ; Exact mapped bytes 75 02: jne 0x42a38f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 25: jmp 0x42a3b4
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp dword ptr [ebp - 5ch], 2747h
        ; Exact mapped bytes 74 09: je 0x42a3a1
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 5ch], 274ah
        ; Exact mapped bytes 75 13: jne 0x42a3b4
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 70h]
        ; Exact mapped bytes E8 6A 16 00 00: call 0x42ba17
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 26 01 00 00: jmp 0x42a4da
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x42a4d1
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [eax + 14h]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 7C 69: jl 0x42a430
        __asm _emit 0x7c
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 18h]
        lea edx, [ecx*8 + 40h]
        push edx
        ; Exact mapped bytes E8 86 20 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 60h], eax
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 14h]
        shl edx, 3
        push edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        push edx
        ; Exact mapped bytes E8 00 AF 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xaf
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 68h], ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes E8 94 20 0A 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [ebp - 60h]
        mov dword ptr [eax + 1ch], ecx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 18h]
        add eax, 8
        mov ecx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 18h], eax
        push 14h
        ; Exact mapped bytes E8 29 20 0A 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x20
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 6ch], eax
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [ebp - 6ch]
        mov dword ptr [edx + eax*8 + 4], ecx
        push 14h
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [eax + ecx*8 + 4]
        push ecx
        ; Exact mapped bytes E8 94 AE 03 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [edx + eax*8], 14h
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [edx + 14h], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 3A: je 0x42a4d1
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 34: je 0x42a4d1
        __asm _emit 0x74
        __asm _emit 0x34
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [eax + ecx*8 + 4], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [eax + ecx*8], edx
        mov eax, dword ptr [ebp - 70h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 1
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [edx + 14h], ecx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x42a4da
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 0A A9 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
