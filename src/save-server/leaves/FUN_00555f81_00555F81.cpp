// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555F81 .. +0x2DC bytes.
extern "C" __declspec(naked) void FUN_00555f81_00555F81() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 68h
        mov dword ptr [ebp - 18h], eax
        push 7d3h
        push 67c1e0h
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 BA 42 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x42
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 50 08 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 7d8h
        push 67c1e0h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 80 42 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x42
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x555ffa
        __asm _emit 0x75
        __asm _emit 0x14
        push 7d9h
        push 67c1e0h
        ; Exact mapped bytes E8 4B 2D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555ffa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x555fe0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 40h], edx
        cmp dword ptr [ebp - 40h], 1
        ; Exact mapped bytes 74 15: je 0x55602a
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 40h], 2
        ; Exact mapped bytes 74 2B: je 0x556046
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [ebp - 40h], 3
        ; Exact mapped bytes 0F 84 91 01 00 00: je 0x5561b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 14 02 00 00: jmp 0x55623e
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x55623e
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 63c938h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3D 41 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x55605c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x55623e
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D8 00 00 00: call dword ptr [edx + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x55607c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 C2 01 00 00: jmp 0x55623e
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 1
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 3
        ; Exact mapped bytes 0F 87 10 01 00 00: ja 0x5561b1
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 24 95 5D 62 55 00: jmp dword ptr [edx*4 + 0x55625d]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5d
        __asm _emit 0x62
        __asm _emit 0x55
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 41h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x5560bc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x5561b1
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 34h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 88 BA FF FF: call 0x551b50
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xba
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 34h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 09: jne 0x5560dd
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 0
        ; Exact mapped bytes EB 36: jmp 0x556113
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 A4 FE F0 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], esp
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 E0 74 EF FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x74
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        push 67c438h
        ; Exact mapped bytes FF 15 C8 C2 68 00: call dword ptr [0x68c2c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 4
        ; Exact mapped bytes 74 7C: je 0x5561a8
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp + 14h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 74: je 0x5561a8
        __asm _emit 0x74
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 18h]
        xor eax, eax
        mov al, byte ptr [edx + 41h]
        test eax, eax
        ; Exact mapped bytes 75 68: jne 0x5561a8
        __asm _emit 0x75
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx + 41h], 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x556179
        __asm _emit 0x74
        __asm _emit 0x14
        push 805h
        push 67c1e0h
        ; Exact mapped bytes E8 CC 2B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556179
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C8: jne 0x556147
        __asm _emit 0x75
        __asm _emit 0xc8
        push 806h
        push 67c1e0h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes E8 CB 40 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x40
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        ; Exact mapped bytes EB 07: jmp 0x5561b1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 18h]
        mov byte ptr [eax + 41h], 0
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x55623e
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        lea eax, [ebp - 38h]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 18: je 0x556200
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 12: je 0x556200
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 15 C4 C2 68 00: call dword ptr [0x68c2c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 13: je 0x556219
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 3ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov dword ptr [ebp - 3ch], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x556200
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 74 13: je 0x556238
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 38h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 38h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x55621f
        __asm _emit 0x75
        __asm _emit 0xe1
        mov ecx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ecx]
        neg eax
        sbb eax, eax
        and eax, 7fffbffbh
        add eax, 80004005h
        lea esp, [ebp - 58h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
