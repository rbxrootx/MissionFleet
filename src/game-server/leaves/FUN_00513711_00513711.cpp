// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513711 .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_00513711_00513711() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 40h], ecx
        push 5d6h
        push 5c84b0h
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 33 7A FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1C 26 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 2D 28 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 B5 89 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x513764
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 5A: jge 0x5137cc
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + eax + 8]
        mov ecx, dword ptr [ebp - 40h]
        add eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 02: jle 0x5137a6
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x5137cc
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 8F: jmp 0x51375b
        __asm _emit 0xeb
        __asm _emit 0x8f
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 96 27 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x27
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 1E 89 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5137fb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 7D 5A: jge 0x513863
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ecx + edx + 8]
        mov eax, dword ptr [ebp - 40h]
        add edx, dword ptr [eax + 54h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 02: jle 0x51383d
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x513863
        __asm _emit 0xeb
        __asm _emit 0x26
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 8F: jmp 0x5137f2
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x5139c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F2 26 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 7A 88 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x513899
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D 1F 01 00 00: jge 0x5139c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 60h]
        mov edx, dword ptr [edx + eax + 8]
        lea eax, [edx + ecx*2]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 75 19: jne 0x5138eb
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 10: je 0x5138eb
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 98 E8 5D 00: mov ecx, dword ptr [0x5de898]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        lea eax, [edx + ecx - 1]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x513903
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x5139a7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 7ch]
        mov eax, dword ptr [ebp - 40h]
        mov eax, dword ptr [eax + 64h]
        mov ecx, dword ptr [ecx + edx + 8]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 75 18: jne 0x513954
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 0F: je 0x513954
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes A1 9C E8 5D 00: mov eax, dword ptr [0x5de89c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [ecx + eax - 1]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 ED 23 02 00: call 0x535d5f
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 3
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 64h]
        shl ecx, 1
        sub edx, ecx
        mov eax, dword ptr [ebp - 24h]
        add eax, edx
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x5138fa
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ecx + 58h]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 60h]
        shl ecx, 1
        sub edx, ecx
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x513890
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
