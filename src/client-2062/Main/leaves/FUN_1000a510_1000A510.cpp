// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A510 .. +0x314 bytes.
extern "C" __declspec(naked) void FUN_1000a510_1000A510() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016cfdeh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 104h
        push ebp
        push esi
        mov esi, ecx
        xor ebp, ebp
        cmp dword ptr [esi + 454h], ebp
        ; Exact mapped bytes 74 07: je 0x1000a540
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CB 02 00 00: jmp 0x1000a80b
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 11ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E CE 02 00 00: mov cx, word ptr [esi + 0x2ce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        sub eax, ecx
        push edi
        cmp eax, ebp
        mov edi, 1
        ; Exact mapped bytes 7E 03: jle 0x1000a560
        __asm _emit 0x7e
        __asm _emit 0x03
        lea edi, [eax + eax]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor edx, edx
        mov eax, dword ptr [ecx + 1047ch]
        mov ebx, dword ptr [ecx + 10474h]
        add eax, ebx
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div edi
        ; Exact mapped bytes 66 8B 86 D0 02 00 00: mov ax, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        mov ebx, edx
        and ecx, 0ffffh
        cmp ebx, ecx
        ; Exact mapped bytes 0F 8C 89 01 00 00: jl 0x1000a72a
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 74h]
        push 1
        push edx
        push esi
        ; Exact mapped bytes E8 E0 6A 0E 00: call 0x100f1090
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x6a
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov edx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 78h]
        shl ecx, 4
        push eax
        lea ecx, [ecx + edx + 0f78h]
        ; Exact mapped bytes E8 87 1D 00 00: call 0x1000c350
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [eax + 4]
        cmp eax, ecx
        ; Exact mapped bytes 75 24: jne 0x1000a5fc
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 7ch]
        push edx
        mov ecx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes E8 23 5F 09 00: call 0x100a0510
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 84 51 06 00: call 0x1006f780
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 89 AE D0 02 00 00: mov word ptr [esi + 0x2d0], bp
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xae
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, ebp
        mov dword ptr [esi + 454h], 1
        mov dword ptr [esi + 310h], ebp
        mov dword ptr [esi + 4b8h], 0ah
        mov dword ptr [esi + 318h], ebp
        ; Exact mapped bytes 7C 0A: jl 0x1000a637
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 33ch], 0ffffff6ah
        mov eax, dword ptr [esi + 4f0h]
        push 58h
        or byte ptr [eax + 24h], 0fh
        ; Exact mapped bytes E8 58 21 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x21
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 10h], eax
        cmp eax, ebp
        mov dword ptr [esp + 11ch], ebp
        ; Exact mapped bytes 74 47: je 0x1000a6a1
        __asm _emit 0x74
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D E8 57 1C 10: mov ecx, dword ptr [0x101c57e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 0bh
        ; Exact mapped bytes 7E 12: jle 0x1000a67b
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1000a67b
        __asm _emit 0x74
        __asm _emit 0x08
        lea edi, [ecx + 2c0h]
        ; Exact mapped bytes EB 02: jmp 0x1000a67d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 2710h
        mov edx, dword ptr [ecx + 104e0h]
        mov ecx, dword ptr [esi + 8]
        push ecx
        mov ecx, dword ptr [esi + 4]
        push ecx
        push edi
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 F1 51 0F 00: call 0x100ff890
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x51
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1000a6a3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 102h
        mov ecx, eax
        mov dword ptr [esp + 120h], 0ffffffffh
        ; Exact mapped bytes E8 A6 4A 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x4a
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 510h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0B: je 0x1000a6d7
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [esi + 7ch]
        push 1
        push eax
        ; Exact mapped bytes E8 59 62 0E 00: call 0x100f0930
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x62
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 21a34h], ebp
        ; Exact mapped bytes 75 4E: jne 0x1000a733
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp dword ptr [esi + 468h], ebp
        ; Exact mapped bytes 74 46: je 0x1000a733
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 74h]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 39: jne 0x1000a733
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 23h
        ; Exact mapped bytes 7E 18: jle 0x1000a720
        __asm _emit 0x7e
        __asm _emit 0x18
        mov eax, dword ptr [eax + 194h]
        cmp eax, ebp
        ; Exact mapped bytes 74 0E: je 0x1000a720
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 8ch]
        push ebp
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 13: jmp 0x1000a733
        __asm _emit 0xeb
        __asm _emit 0x13
        xor ecx, ecx
        push ebp
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes EB 09: jmp 0x1000a733
        __asm _emit 0xeb
        __asm _emit 0x09
        sub eax, ebx
        ; Exact mapped bytes 66 89 86 D0 02 00 00: mov word ptr [esi + 0x2d0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c4h]
        cmp ecx, 3e8h
        ; Exact mapped bytes 73 19: jae 0x1000a75a
        __asm _emit 0x73
        __asm _emit 0x19
        mov eax, 66666667h
        imul ebx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edx, ecx
        mov dword ptr [esi + 4c4h], edx
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        cmp eax, ebp
        pop ebx
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x1000a805
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c4h]
        mov edx, dword ptr [esp + 11ch]
        push ecx
        xor eax, eax
        ; Exact mapped bytes 66 8B 86 D0 02 00 00: mov ax, word ptr [esi + 0x2d0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8E CE 02 00 00: mov cx, word ptr [esi + 0x2ce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov edx, dword ptr [esi + 334h]
        push eax
        mov eax, dword ptr [esi + 4a0h]
        push ecx
        mov ecx, dword ptr [esi + 49ch]
        push edx
        mov edx, dword ptr [esi + 8]
        push eax
        mov eax, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push edx
        mov edx, dword ptr [esi + 78h]
        add ecx, 37ch
        push eax
        mov eax, dword ptr [esi + 7ch]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 10474h]
        mov edx, dword ptr [eax + 1047ch]
        push ecx
        push edx
        lea eax, [esp + 44h]
        push 1017f254h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 40h
        lea ecx, [esp + 8]
        lea edx, [esp + 0ch]
        push ebp
        push ecx
        push edx
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D F0 51 1C 10: mov ecx, dword ptr [0x101c51f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        lea eax, [esp + 18h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 A4 50 17 10: call dword ptr [0x101750a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 454h]
        mov ecx, dword ptr [esp + 10ch]
        pop esi
        pop ebp
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 110h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
