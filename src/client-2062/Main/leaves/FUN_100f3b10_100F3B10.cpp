// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F3B10 .. +0x1FE bytes.
extern "C" __declspec(naked) void FUN_100f3b10_100F3B10() {
    __asm {
        push -1
        push 1017412ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 108h
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 124h]
        push edi
        mov edi, 0ah
        mov ecx, dword ptr [esi + 1430h]
        mov ebx, 64h
        mov eax, ecx
        cdq
        idiv edi
        mov eax, ecx
        mov edi, edx
        cdq
        idiv ebx
        mov eax, 66666667h
        push edi
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov ebx, edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        push ebx
        shr ecx, 1fh
        add edx, ecx
        mov ebp, edx
        lea edx, [esp + 20h]
        push ebp
        push 101ac804h
        push edx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 198h
        ; Exact mapped bytes E8 0B 8C 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 10h], eax
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr [esp + 120h], ecx
        ; Exact mapped bytes 74 13: je 0x100f3bbc
        __asm _emit 0x74
        __asm _emit 0x13
        push ecx
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 0A BF 00 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x100f3bc2
        __asm _emit 0xeb
        __asm _emit 0x06
        mov dword ptr [esp + 10h], ecx
        mov eax, ecx
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [esp + 120h], 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 7E 0F: jle 0x100f3be6
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100f3be6
        __asm _emit 0x74
        __asm _emit 0x05
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 0B: jne 0x100f3bf1
        __asm _emit 0x75
        __asm _emit 0x0b
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes FF 15 C8 50 17 10: call dword ptr [0x101750c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        push ebx
        push ebp
        lea eax, [esp + 24h]
        push 101ac7e4h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 198h
        ; Exact mapped bytes E8 92 8B 07 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x8b
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 14h], eax
        xor ebx, ebx
        mov dword ptr [esp + 120h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 11: je 0x100f3c37
        __asm _emit 0x74
        __asm _emit 0x11
        lea ecx, [esp + 18h]
        push ebx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 8D BE 00 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x100f3c39
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [edi + 164h]
        mov dword ptr [esp + 120h], 0ffffffffh
        cmp eax, ebx
        ; Exact mapped bytes 7E 0E: jle 0x100f3c5c
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100f3c5c
        __asm _emit 0x74
        __asm _emit 0x04
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 75 0B: jne 0x100f3c67
        __asm _emit 0x75
        __asm _emit 0x0b
        lea edx, [esp + 18h]
        push edx
        ; Exact mapped bytes FF 15 C8 50 17 10: call dword ptr [0x101750c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 2D 80 50 17 10: mov ebp, dword ptr [0x10175080]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        cmp dword ptr [esi + 1434h], ebx
        ; Exact mapped bytes 74 06: je 0x100f3c7b
        __asm _emit 0x74
        __asm _emit 0x06
        push 1
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        ; Exact mapped bytes EB F2: jmp 0x100f3c6d
        __asm _emit 0xeb
        __asm _emit 0xf2
        mov ecx, dword ptr [esp + 10h]
        mov ebp, 1
        mov dword ptr [esi + 1434h], ebp
        cmp dword ptr [ecx + 164h], ebx
        ; Exact mapped bytes 7E 24: jle 0x100f3cb6
        __asm _emit 0x7e
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 1A: je 0x100f3cb6
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 74 16: je 0x100f3cb6
        __asm _emit 0x74
        __asm _emit 0x16
        cmp dword ptr [edi + 164h], ebx
        ; Exact mapped bytes 7E 0E: jle 0x100f3cb6
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [edi + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 04: je 0x100f3cb6
        __asm _emit 0x74
        __asm _emit 0x04
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 75 15: jne 0x100f3ccb
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebx
        push ebx
        push 12eh
        ; Exact mapped bytes E8 E7 9D F2 FF: call 0x1001dab0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x9d
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes EB 20: jmp 0x100f3ceb
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [esi + 1430h]
        mov dword ptr [esi + eax*4 + 808h], ecx
        mov ecx, dword ptr [esi + 1430h]
        mov dword ptr [esi + ecx*4 + 0c08h], edi
        mov dword ptr [esi + 142ch], ebp
        mov ecx, dword ptr [esp + 118h]
        mov dword ptr [esi + 1434h], ebx
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 114h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
