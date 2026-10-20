// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8C60 .. +0x1E3 bytes.
extern "C" __declspec(naked) void FUN_584a8c60_584A8C60() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887df75h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 4ch
        push esi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 A2 95 FF FF: call 0x584a2230
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 33 E8 FD FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 32 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x32
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a8cbc
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 34 FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x584a8da0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E2 42 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 42 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 02: jne 0x584a8cde
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x584a8cb1
        __asm _emit 0xeb
        __asm _emit 0xd3
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F7 31 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a8cf9
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 3A 34 FE FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x584a8d9b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A5 42 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9B 42 FE FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x42
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 74 02: je 0x584a8d1b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D3: jmp 0x584a8cee
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8D 33 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 DC FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 77 33 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7C DC FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 C4 F6 FF FF: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes DD 5D B4: fstp qword ptr [ebp - 0x4c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xb4
        ; Exact mapped bytes F2 0F 10 45 0C: movsd xmm0, qword ptr [ebp + 0xc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes 66 0F 2F 45 B4: comisd xmm0, xmmword ptr [ebp - 0x4c]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xb4
        ; Exact mapped bytes 72 28: jb 0x584a8d96
        __asm _emit 0x72
        __asm _emit 0x28
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 A6 F4 FD FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 10h]
        push edx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 3A F1 FF FF: call 0x584a7ec0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x584a8cee
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 11 FF FF FF: jmp 0x584a8cb1
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 20h], 0ffffffffh
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 76 A8 FF FF: call 0x584a3630
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 09: jmp 0x584a8dc6
        __asm _emit 0xeb
        __asm _emit 0x09
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7B 99 FF FF: call 0x584a2740
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 9E A9 FF FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 45 98 FF FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 2D: je 0x584a8e0f
        __asm _emit 0x74
        __asm _emit 0x2d
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 D6 98 FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 7E 1B: jle 0x584a8e0d
        __asm _emit 0x7e
        __asm _emit 0x1b
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 C6 98 FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 B8 98 FF FF: call 0x584a26c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        ; Exact mapped bytes EB AE: jmp 0x584a8dbd
        __asm _emit 0xeb
        __asm _emit 0xae
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 BF E9 FD FF: call 0x584877e0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 80 97 FF FF: call 0x584a25b0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
