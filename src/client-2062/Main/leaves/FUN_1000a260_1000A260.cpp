// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000A260 .. +0x2A3 bytes.
extern "C" __declspec(naked) void FUN_1000a260_1000A260() {
    __asm {
        sub esp, 104h
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 454h]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1000a27f
        __asm _emit 0x74
        __asm _emit 0x0c
        xor eax, eax
        pop esi
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 110h]
        xor ecx, ecx
        mov eax, ebp
        ; Exact mapped bytes 66 8B 8E CC 02 00 00: mov cx, word ptr [esi + 0x2cc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        sub eax, ecx
        mov edi, 2
        cmp eax, 2
        ; Exact mapped bytes 7C 02: jl 0x1000a2a1
        __asm _emit 0x7c
        __asm _emit 0x02
        mov edi, eax
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 1047ch]
        mov edx, dword ptr [ecx + 10474h]
        add eax, edx
        xor edx, edx
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
        mov edi, edx
        and ecx, 0ffffh
        cmp edi, ecx
        ; Exact mapped bytes 0F 8C 43 01 00 00: jl 0x1000a425
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 74h]
        push 1
        push edx
        push esi
        ; Exact mapped bytes E8 9F 6D 0E 00: call 0x100f1090
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x6d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov edx, dword ptr [esi + 74h]
        mov eax, dword ptr [esi + 78h]
        shl ecx, 4
        push eax
        lea ecx, [ecx + edx + 0f78h]
        ; Exact mapped bytes E8 46 20 00 00: call 0x1000c350
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 74h]
        cmp ecx, eax
        ; Exact mapped bytes 75 23: jne 0x1000a33c
        __asm _emit 0x75
        __asm _emit 0x23
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [esi + 7ch]
        push edx
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 E3 61 09 00: call 0x100a0510
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 44 54 06 00: call 0x1006f780
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 33ch]
        ; Exact mapped bytes 66 C7 86 D0 02 00 00 00 00: mov word ptr [esi + 0x2d0], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esi + 454h], 1
        mov dword ptr [esi + 310h], 0
        mov dword ptr [esi + 4b8h], 0ah
        mov dword ptr [esi + 318h], 0
        ; Exact mapped bytes 7C 0A: jl 0x1000a381
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [esi + 33ch], 0ffffff6ah
        mov ecx, dword ptr [esi + 510h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [esi + 4f0h]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 74 30: je 0x1000a3cd
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [esi + 7ch]
        push 1
        push eax
        ; Exact mapped bytes E8 88 65 0E 00: call 0x100f0930
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 298h]
        shr ecx, 1
        mov edx, dword ptr [eax + 0eb8h]
        xor edx, 0aaaaaaaah
        add ecx, edx
        xor ecx, 0aaaaaaaah
        mov dword ptr [eax + 0eb8h], ecx
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 21a34h]
        test ecx, ecx
        ; Exact mapped bytes 75 52: jne 0x1000a42e
        __asm _emit 0x75
        __asm _emit 0x52
        mov eax, dword ptr [esi + 468h]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x1000a42e
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 74h]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 3A: jne 0x1000a42e
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes A1 F4 58 1C 10: mov eax, dword ptr [0x101c58f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 23h
        ; Exact mapped bytes 7E 19: jle 0x1000a41b
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x1000a41b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 8ch]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 13: jmp 0x1000a42e
        __asm _emit 0xeb
        __asm _emit 0x13
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 09: jmp 0x1000a42e
        __asm _emit 0xeb
        __asm _emit 0x09
        sub eax, edi
        ; Exact mapped bytes 66 89 86 D0 02 00 00: mov word ptr [esi + 0x2d0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 66666667h
        imul edi
        mov eax, dword ptr [esi + 218h]
        sar edx, 1
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp eax, edx
        ; Exact mapped bytes 7D 06: jge 0x1000a44e
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [esi + 218h], edx
        ; Exact mapped bytes A1 D4 56 1C 10: mov eax, dword ptr [0x101c56d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x1000a4f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4c4h]
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
        ; Exact mapped bytes 66 8B 8E CC 02 00 00: mov cx, word ptr [esi + 0x2cc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edx
        mov edx, dword ptr [esi + 334h]
        push ebp
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
        lea eax, [esp + 48h]
        push 1017f1e4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 40h
        lea ecx, [esp + 0ch]
        lea edx, [esp + 10h]
        push 0
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
        lea eax, [esp + 1ch]
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
        pop edi
        pop ebp
        pop esi
        add esp, 104h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
