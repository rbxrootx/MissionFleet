// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005D440 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_1005d440_1005D440() {
    __asm {
        push -1
        push 1016f26bh
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
        push ecx
        push esi
        push edi
        mov edi, ecx
        push 0c8h
        ; Exact mapped bytes E8 3C F3 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xf3
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 8], eax
        test eax, eax
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 74 27: je 0x1005d49e
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 8B 51 26: mov dx, word ptr [ecx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x26
        mov ecx, eax
        ; Exact mapped bytes 66 83 C2 05: add dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc2
        __asm _emit 0x05
        push edx
        push 258h
        push 0fffffce0h
        push 0
        push edi
        ; Exact mapped bytes E8 16 52 FD FF: call 0x100326b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x52
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes EB 02: jmp 0x1005d4a0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov dword ptr [esp + 14h], 0ffffffffh
        cmp dword ptr [eax + 170h], 16h
        ; Exact mapped bytes 7E 0F: jle 0x1005d4c5
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1005d4c5
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes EB 02: jmp 0x1005d4c7
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes A1 E8 57 1C 10: mov eax, dword ptr [0x101c57e8]
        __asm _emit 0xa1
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 0F: jle 0x1005d4e4
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1005d4e4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x1005d4e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 01 5C FD FF: call 0x100330f0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5c
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 DA 5A FD FF: call 0x10032fd0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 160h]
        cmp edx, 22h
        ; Exact mapped bytes 7E 12: jle 0x1005d518
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [eax + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1005d518
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 880h
        ; Exact mapped bytes EB 02: jmp 0x1005d51a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp edx, 7
        ; Exact mapped bytes 7E 11: jle 0x1005d530
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1005d530
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x1005d532
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 93 59 FD FF: call 0x10032ed0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 B8 57 1C 10: mov eax, dword ptr [0x101c57b8]
        __asm _emit 0xa1
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 160h]
        cmp ecx, 23h
        ; Exact mapped bytes 7E 12: jle 0x1005d55f
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [eax + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1005d55f
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 8c0h
        ; Exact mapped bytes EB 02: jmp 0x1005d561
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp ecx, 8
        ; Exact mapped bytes 7E 11: jle 0x1005d577
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1005d577
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 200h
        ; Exact mapped bytes EB 02: jmp 0x1005d579
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 1
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0C 59 FD FF: call 0x10032e90
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D B8 57 1C 10: mov ecx, dword ptr [0x101c57b8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 160h]
        cmp eax, 24h
        ; Exact mapped bytes 7E 12: jle 0x1005d5a7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [ecx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x1005d5a7
        __asm _emit 0x74
        __asm _emit 0x08
        add edx, 900h
        ; Exact mapped bytes EB 02: jmp 0x1005d5a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        cmp eax, 9
        ; Exact mapped bytes 7E 12: jle 0x1005d5c0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1005d5c0
        __asm _emit 0x74
        __asm _emit 0x08
        lea eax, [ecx + 240h]
        ; Exact mapped bytes EB 02: jmp 0x1005d5c2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0
        push 0
        push edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 71 59 FD FF: call 0x10032f40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 A4 59 FD FF: call 0x10032f80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 CB 7D 06 00: call 0x100c53b0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7d
        __asm _emit 0x06
        __asm _emit 0x00
        push 101h
        mov ecx, esi
        ; Exact mapped bytes E8 6F 1B 0A 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FF 1F: and word ptr [esi + 0x24], 0x1fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x1f
        mov eax, dword ptr [edi + 0a0h]
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        ; Exact mapped bytes 66 83 C1 09: add cx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x09
        ; Exact mapped bytes 66 89 4E 26: mov word ptr [esi + 0x26], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005d616
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 8A 19 0A 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x19
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1005d623
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 DD 18 0A 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
