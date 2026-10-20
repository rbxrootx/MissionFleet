// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BBC30 .. +0x266 bytes.
extern "C" __declspec(naked) void FUN_588bbc30() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        sub esp, 14h
        push esi
        mov esi, ecx
        mov cl, byte ptr [eax + 1ch]
        mov byte ptr [esi + 13a4h], cl
        mov byte ptr [esi + 0a0h], 0
        mov byte ptr [esi + 13a5h], 0
        mov byte ptr [esi + 13a7h], 0
        lea eax, [esi + 0fa4h]
        mov ecx, 80h
        xor edx, edx
        mov dword ptr [eax + 200h], edx
        mov dword ptr [eax], edx
        mov dword ptr [eax - 200h], edx
        add eax, 4
        sub ecx, 1
        ; Exact mapped bytes 75 E8: jne 0x588bbc64
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [esp + 0ch], eax
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x588bbc9e
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 88h]
        push eax
        ; Exact mapped bytes E8 C7 B6 04 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xb6
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        add esp, 14h
        ret
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes EB 04: jmp 0x588bbca7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 18h]
        mov edi, dword ptr [eax + 0ch]
        mov eax, dword ptr [edi + 0a4h]
        shr eax, 1
        movzx ecx, ax
        lea edx, [edi + 1a4h]
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 14h], 1
        mov dword ptr [esp + 1ch], 0
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 10h]
        mov ebx, dword ptr [eax]
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ebp, ebx
        push ebx
        shr ebp, 10h
        push ebp
        ; Exact mapped bytes E8 A5 DB EB FF: call 0x58779890
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdb
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x588bbd0d
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [eax + 554h], 1
        ; Exact mapped bytes 74 15: je 0x588bbd0d
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 80 3D 09 49 A2 58 00: cmp byte ptr [0x58a24909], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 21: je 0x588bbd22
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes 66 83 FD 03: cmp bp, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x03
        ; Exact mapped bytes 75 1B: jne 0x588bbd22
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes 66 83 FB 0A: cmp bx, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfb
        __asm _emit 0x0a
        ; Exact mapped bytes 74 15: je 0x588bbd22
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [esp + 1ch]
        add dword ptr [esp + 10h], 4
        inc eax
        cmp eax, 7
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 7C B3: jl 0x588bbcd3
        __asm _emit 0x7c
        __asm _emit 0xb3
        ; Exact mapped bytes EB 08: jmp 0x588bbd2a
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 83 F8 50: cmp ax, 0x50
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x50
        ; Exact mapped bytes 0F 84 27 01 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 51: cmp ax, 0x51
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x51
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 52: cmp ax, 0x52
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x52
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 01: cmp ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x01
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 4C: cmp ax, 0x4c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4c
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 4D: cmp ax, 0x4d
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4d
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 4E: cmp ax, 0x4e
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4e
        ; Exact mapped bytes 0F 84 E2 00 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F8 4F: cmp ax, 0x4f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x4f
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x588bbe5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0a0h]
        mov edx, dword ptr [edi + 30h]
        mov dword ptr [esi + ecx*4 + 0a4h], edx
        movzx eax, byte ptr [esi + 0a0h]
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [esi + eax*8 + 2a4h], ecx
        mov edx, dword ptr [edi + 8]
        mov dword ptr [esi + eax*8 + 2a8h], edx
        movzx eax, word ptr [edi + 24h]
        movzx ecx, byte ptr [esi + 0a0h]
        and eax, 1
        mov dword ptr [esi + ecx*4 + 6a4h], eax
        movzx edx, byte ptr [esi + 0a0h]
        movzx eax, word ptr [edi + 26h]
        ; Exact mapped bytes 66 89 84 56 A4 08 00 00: mov word ptr [esi + edx*2 + 0x8a4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [esi + 0a0h]
        mov edx, dword ptr [edi + 2ch]
        mov dword ptr [esi + ecx*4 + 9a4h], edx
        movzx eax, byte ptr [esi + 0a0h]
        mov ecx, dword ptr [edi + 28h]
        mov dword ptr [esi + eax*4 + 0ba4h], ecx
        push 80h
        mov ecx, edi
        ; Exact mapped bytes E8 CC 6E 04 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6e
        __asm _emit 0x04
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 0a0h]
        mov dword ptr [esi + edx*4 + 0da4h], edi
        movzx ecx, byte ptr [esi + 0a0h]
        xor eax, eax
        mov dword ptr [esi + ecx*4 + 0fa4h], eax
        movzx edx, byte ptr [esi + 0a0h]
        push edi
        mov ecx, esi
        mov dword ptr [esi + edx*4 + 11a4h], eax
        ; Exact mapped bytes E8 98 70 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 00 71 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x71
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 87 0D EC FF: call 0x5877cbe0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0xff
        inc byte ptr [esi + 0a0h]
        cmp byte ptr [esi + 0a0h], 80h
        ; Exact mapped bytes 74 13: je 0x588bbe7b
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esp + 18h]
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 18h], eax
        test eax, eax
        ; Exact mapped bytes 0F 85 28 FE FF FF: jne 0x588bbca3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [esi + 0a0h]
        push ecx
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 D2 B4 04 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb4
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop ebp
        pop ebx
        pop esi
        add esp, 14h
        ret
    }
}
