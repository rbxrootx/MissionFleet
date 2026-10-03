// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 4296 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E3080 .. +0x2ED bytes.
extern "C" __declspec(naked) void FUN_587e3080_segment_00() {
    __asm {
        sub esp, 70h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 6ch], eax
        mov eax, dword ptr [esp + 78h]
        push ebx
        mov ebx, dword ptr [esp + 78h]
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov dword ptr [esp + 10h], ebx
        cmp eax, 3
        ; Exact mapped bytes 0F 85 36 05 00 00: jne 0x587e35df
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        test eax, eax
        ; Exact mapped bytes 0F 84 86 10 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 78 10 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F0 45 A2 58: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 0F 84 5E 10 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0db0h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 0F 84 44 10 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 E4 45 A2 58: mov edx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 0F 84 2C 10 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 588h]
        cmp ebx, eax
        ; Exact mapped bytes 75 3C: jne 0x587e3157
        __asm _emit 0x75
        __asm _emit 0x3c
        mov ecx, 0a9h
        ; Exact mapped bytes 66 39 4E 60: cmp word ptr [esi + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 0F 85 13 10 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 594h]
        mov eax, dword ptr [eax + 50h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 5cch]
        push 1
        ; Exact mapped bytes E8 AD E4 F4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        push 5899bc84h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E9 49 04 00 00: jmp 0x587e35a0
        __asm _emit 0xe9
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 590h]
        ; Exact mapped bytes 75 30: jne 0x587e318f
        __asm _emit 0x75
        __asm _emit 0x30
        mov ecx, 0a9h
        ; Exact mapped bytes 66 39 4E 60: cmp word ptr [esi + 0x60], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x4e
        __asm _emit 0x60
        ; Exact mapped bytes 0F 85 CF 0F 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcf
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5c8h]
        push 1
        ; Exact mapped bytes E8 75 E4 F4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        push 5899bc58h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E9 11 04 00 00: jmp 0x587e35a0
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 58ch]
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x587e3233
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 7C 46 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi + 344h]
        mov dword ptr [edx + 84h], 100h
        mov ecx, dword ptr [esi + 344h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 0b8h]
        mov dword ptr [eax + 84h], 5ah
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 5c4h]
        push 1
        ; Exact mapped bytes E8 05 E4 F4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0xf4
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + 0cc8h]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x587e321f
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0dc0h]
        push 0
        push 0
        push 0
        push 0
        push eax
        mov eax, dword ptr [esi + 58ch]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        push eax
        push 2
        ; Exact mapped bytes E8 D1 58 09 00: call 0x58878af0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x00
        push 5899bc38h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E9 6D 03 00 00: jmp 0x587e35a0
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 584h]
        ; Exact mapped bytes 0F 85 FF 00 00 00: jne 0x587e333e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        cmp dword ptr [eax + 0ccch], 0
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x587e3309
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 18h
        ; Exact mapped bytes 7E 14: jle 0x587e3274
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587e3274
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes EB 02: jmp 0x587e3276
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 9ch], ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 08 47 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x47
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edi + 9a4h]
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x587e32d4
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 0a4h]
        and ecx, 0fffffffeh
        cmp ecx, 80000000h
        ; Exact mapped bytes 75 1C: jne 0x587e32d4
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, 0aah
        ; Exact mapped bytes 66 33 50 64: xor dx, word ptr [eax + 0x64]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x50
        __asm _emit 0x64
        movzx eax, dx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DC 0D 30 BC 99 58: fmul qword ptr [0x5899bc30]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xbc
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes EB 02: jmp 0x587e32d6
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes D9 EE: fldz
        __asm _emit 0xd9
        __asm _emit 0xee
        push 0
        push 0
        push 0
        ; Exact mapped bytes E8 BF 99 19 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x99
        __asm _emit 0x19
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ccch]
        push eax
        mov eax, dword ptr [esi + 584h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 0dc0h]
        push edx
        push eax
        push 3
        ; Exact mapped bytes E8 EC 57 09 00: call 0x58878af0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 0E 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0cc0h]
        movzx ecx, word ptr [eax + 0d8h]
        push ecx
        push 5899bc10h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 44h]
        push edx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea eax, [esp + 3ch]
        push eax
        ; Exact mapped bytes E9 62 02 00 00: jmp 0x587e35a0
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 5f8h]
        ; Exact mapped bytes 0F 84 6E 02 00 00: je 0x587e35b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 5d0h]
        ; Exact mapped bytes 0F 84 62 02 00 00: je 0x587e35b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0da8h]
        ; Exact mapped bytes E8 7F 75 0D 00: call 0x588ba8e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x75
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D4 0D 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd4
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        ; Exact mapped bytes EB 03: jmp 0x587e3370
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E3370 .. +0x4D7 bytes.
extern "C" __declspec(naked) void FUN_587e3080_segment_01() {
    __asm {
        movzx ecx, bp
        cmp ebx, dword ptr [esi + ecx*4 + 504h]
        ; Exact mapped bytes 74 0C: je 0x587e3388
        __asm _emit 0x74
        __asm _emit 0x0c
        inc ebp
        ; Exact mapped bytes 66 83 FD 1C: cmp bp, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x1c
        ; Exact mapped bytes 72 ED: jb 0x587e3370
        __asm _emit 0x72
        __asm _emit 0xed
        ; Exact mapped bytes E9 FA 00 00 00: jmp 0x587e3482
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        movzx edi, bp
        cmp dword ptr [edx + edi*4 + 0b40h], 0
        ; Exact mapped bytes 0F 84 99 00 00 00: je 0x587e3438
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 1ah
        ; Exact mapped bytes 7E 14: jle 0x587e33c1
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587e33c1
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes EB 02: jmp 0x587e33c3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 9ch], ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 BB 45 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x45
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [ecx + edi*8 + 0bc4h]
        mov edx, dword ptr [ecx + edi*8 + 0bc0h]
        push eax
        movzx eax, word ptr [ecx + edi*4 + 0ac2h]
        push edx
        movzx edx, word ptr [ecx + edi*4 + 0ac0h]
        push eax
        mov eax, dword ptr [ecx + edi*4 + 0b40h]
        push edx
        push eax
        mov eax, dword ptr [esi + edi*4 + 504h]
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 57 2C F5 FF: call 0x58736080
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [esi + 0dc0h]
        ; Exact mapped bytes E8 B8 56 09 00: call 0x58878af0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x56
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 0cc0h]
        movzx eax, word ptr [eax + edi*2 + 0dah]
        push eax
        push 5899bbf0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 24h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 1ch]
        push edx
        push 32h
        push 0c8h
        push ebx
        ; Exact mapped bytes E8 3E F2 F7 FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf2
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 FD 1C: cmp bp, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 85 B1 0C 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        movzx eax, bp
        cmp ebx, dword ptr [esi + eax*4 + 504h]
        ; Exact mapped bytes 74 0C: je 0x587e34a8
        __asm _emit 0x74
        __asm _emit 0x0c
        inc ebp
        ; Exact mapped bytes 66 83 FD 20: cmp bp, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x20
        ; Exact mapped bytes 72 ED: jb 0x587e3490
        __asm _emit 0x72
        __asm _emit 0xed
        ; Exact mapped bytes E9 95 0C 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        movzx edi, bp
        cmp dword ptr [eax + edi*4 + 0b40h], 0
        ; Exact mapped bytes 0F 84 AB 00 00 00: je 0x587e356a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 0aah
        ; Exact mapped bytes 66 39 8C B8 C0 0A 00 00: cmp word ptr [eax + edi*4 + 0xac0], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0xc0
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x587e356a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 1ah
        ; Exact mapped bytes 7E 14: jle 0x587e34f4
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x587e34f4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [eax + 194h]
        mov ecx, dword ptr [edx + 68h]
        ; Exact mapped bytes EB 02: jmp 0x587e34f6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov dword ptr [esi + 9ch], ecx
        ; Exact mapped bytes A1 F8 48 A2 58: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 89 44 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [ecx + edi*8 + 0bc4h]
        mov eax, dword ptr [ecx + edi*8 + 0bc0h]
        push edx
        movzx edx, word ptr [ecx + edi*4 + 0ac2h]
        push eax
        movzx eax, word ptr [ecx + edi*4 + 0ac0h]
        push edx
        mov edx, dword ptr [ecx + edi*4 + 0b40h]
        push eax
        mov eax, dword ptr [esi + edi*4 + 504h]
        push edx
        mov edx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push edx
        push eax
        push edi
        ; Exact mapped bytes E8 25 2B F5 FF: call 0x58736080
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x2b
        __asm _emit 0xf5
        __asm _emit 0xff
        movzx ecx, ax
        push ecx
        mov ecx, dword ptr [esi + 0dc0h]
        ; Exact mapped bytes E8 86 55 09 00: call 0x58878af0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x55
        __asm _emit 0x09
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 0cc0h]
        movzx eax, word ptr [eax + 11ch]
        push eax
        push 5899bbd0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 64h]
        push ecx
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        lea edx, [esp + 5ch]
        push edx
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 32h
        push 0c8h
        push ebx
        ; Exact mapped bytes E8 0D F1 F7 FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 85 0B 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        push 5899bbb0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 20 48 A2 58: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        push 32h
        push 118h
        push ebx
        ; Exact mapped bytes E8 E6 F0 F7 FF: call 0x587626c0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf0
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes E9 5E 0B 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 0F 85 04 01 00 00: jne 0x587e36ec
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 588h]
        ; Exact mapped bytes 75 26: jne 0x587e3616
        __asm _emit 0x75
        __asm _emit 0x26
        mov eax, dword ptr [esi + 5cch]
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi + 588h]
        mov eax, dword ptr [esi + 594h]
        mov ecx, dword ptr [edx + 50h]
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes E9 27 0B 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x27
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 590h]
        ; Exact mapped bytes 75 14: jne 0x587e3632
        __asm _emit 0x75
        __asm _emit 0x14
        mov esi, dword ptr [esi + 5c8h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes E9 0B 0B 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 58ch]
        ; Exact mapped bytes 0F 85 8C 00 00 00: jne 0x587e36ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5c4h]
        push 0
        ; Exact mapped bytes E8 A5 DF F4 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xdf
        __asm _emit 0xf4
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d78h]
        test eax, eax
        ; Exact mapped bytes 74 63: je 0x587e36b8
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [eax + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 74 59: je 0x587e36b8
        __asm _emit 0x74
        __asm _emit 0x59
        mov ecx, dword ptr [esi + 0db8h]
        mov edx, dword ptr [ecx + 9ch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        shr al, 1
        test al, 1
        ; Exact mapped bytes 75 09: jne 0x587e367e
        __asm _emit 0x75
        __asm _emit 0x09
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 A2 41 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 344h]
        mov dword ptr [ecx + 84h], 0
        mov ecx, dword ptr [esi + 344h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0b8h]
        mov dword ptr [ecx + 84h], 100h
        mov ecx, dword ptr [esi + 0b8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0dc0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 73 0A 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 584h]
        ; Exact mapped bytes 74 E6: je 0x587e36b8
        __asm _emit 0x74
        __asm _emit 0xe6
        xor eax, eax
        movzx ecx, ax
        cmp ebx, dword ptr [esi + ecx*4 + 504h]
        ; Exact mapped bytes 74 D8: je 0x587e36b8
        __asm _emit 0x74
        __asm _emit 0xd8
        inc eax
        ; Exact mapped bytes 66 83 F8 20: cmp ax, 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x20
        ; Exact mapped bytes 72 ED: jb 0x587e36d4
        __asm _emit 0x72
        __asm _emit 0xed
        ; Exact mapped bytes E9 51 0A 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 08 0A 00 00: jne 0x587e40fd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 1038h]
        ; Exact mapped bytes 0F 84 73 03 00 00: je 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x73
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        test eax, eax
        ; Exact mapped bytes 0F 84 65 03 00 00: je 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4ch]
        xor ecx, 0aaaaaaaah
        ; Exact mapped bytes 0F 84 56 03 00 00: je 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 590h]
        ; Exact mapped bytes 75 2A: jne 0x587e3750
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [esi + 0dc8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [ecx + 48h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 0ah
        push edx
        ; Exact mapped bytes E8 C5 63 FD FF: call 0x587b9b10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 24 03 00 00: jmp 0x587e3a74
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 58ch]
        ; Exact mapped bytes 75 4E: jne 0x587e37a6
        __asm _emit 0x75
        __asm _emit 0x4e
        mov eax, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        mov edx, 3e0h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 83 F9 40: cmp cx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 E9 02 00 00: je 0x587e3a5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dc0h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 0d78h]
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0db0h]
        push 1
        push 0
        push 0
        push eax
        push 2
        ; Exact mapped bytes E8 BF 55 FB FF: call 0x58798d60
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 CE 02 00 00: jmp 0x587e3a74
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 588h]
        ; Exact mapped bytes 75 51: jne 0x587e37ff
        __asm _emit 0x75
        __asm _emit 0x51
        mov edx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        mov edx, 3e0h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 83 F9 40: cmp cx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x40
        ; Exact mapped bytes 0F 84 93 02 00 00: je 0x587e3a5d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D D8 48 A2 58 00: cmp dword ptr [0x58a248d8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 9D 02 00 00: jne 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 0
        push 1
        push eax
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db0h]
        push 1
        ; Exact mapped bytes E8 70 55 FB FF: call 0x58798d60
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x55
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 D8 48 A2 58 01 00 00 00: mov dword ptr [0x58a248d8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 75 02 00 00: jmp 0x587e3a74
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 584h]
        cmp ebx, ecx
        ; Exact mapped bytes 0F 84 D8 01 00 00: je 0x587e39e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 598h]
        ; Exact mapped bytes 0F 84 CC 01 00 00: je 0x587e39e5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0cc4h], 0
        ; Exact mapped bytes 0F 84 4E 02 00 00: je 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0db4h]
        mov eax, dword ptr [ecx + 0f4h]
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 85 35 02 00 00: jne 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes EB 09: jmp 0x587e3850
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587E3850 .. +0x904 bytes.
extern "C" __declspec(naked) void FUN_587e3080_segment_02() {
    __asm {
        movzx eax, di
        mov eax, dword ptr [esi + eax*4 + 504h]
        cmp ebx, eax
        ; Exact mapped bytes 75 42: jne 0x587e38a0
        __asm _emit 0x75
        __asm _emit 0x42
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 39: je 0x587e38a0
        __asm _emit 0x74
        __asm _emit 0x39
        mov eax, dword ptr [esi + 0d78h]
        mov edx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 4A 04: mov cx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x04
        mov edx, 3e0h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        ; Exact mapped bytes 66 83 F9 40: cmp cx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x40
        ; Exact mapped bytes 75 2B: jne 0x587e38b0
        __asm _emit 0x75
        __asm _emit 0x2b
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x587e38a0
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 478h
        ; Exact mapped bytes E8 57 82 F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x82
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 14 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0xf8
        __asm _emit 0xff
        inc edi
        ; Exact mapped bytes 66 83 FF 1C: cmp di, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x1c
        ; Exact mapped bytes 72 A9: jb 0x587e3850
        __asm _emit 0x72
        __asm _emit 0xa9
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x587e398a
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        mov edx, dword ptr [eax + 0cc0h]
        movzx ebp, di
        mov eax, dword ptr [esi + ebp*4 + 504h]
        mov dword ptr [esp + 14h], edi
        mov edi, dword ptr [edx + 268h]
        mov ecx, 1fh
        sub ecx, ebp
        shr edi, cl
        mov ecx, dword ptr [esi + 0da8h]
        add eax, 4
        push eax
        and edi, 1
        ; Exact mapped bytes E8 F5 69 F5 FF: call 0x5873a2e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x69
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d78h]
        mov ecx, dword ptr [eax + ebp*4 + 0b40h]
        test ecx, ecx
        ; Exact mapped bytes 74 67: je 0x587e3963
        __asm _emit 0x74
        __asm _emit 0x67
        mov eax, dword ptr [eax + 0cc0h]
        movzx edx, word ptr [eax + 4]
        mov dword ptr [esp + 18h], eax
        mov eax, edx
        and eax, 3e0h
        cmp eax, 0a0h
        ; Exact mapped bytes 75 44: jne 0x587e395c
        __asm _emit 0x75
        __asm _emit 0x44
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 66 8B 40 0E: mov ax, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0e
        mov ebx, 0ff0h
        ; Exact mapped bytes 66 23 C3: and ax, bx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc3
        mov ebx, 780h
        ; Exact mapped bytes 66 3B C3: cmp ax, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc3
        ; Exact mapped bytes 72 26: jb 0x587e3958
        __asm _emit 0x72
        __asm _emit 0x26
        and dl, 1fh
        cmp dl, 7
        ; Exact mapped bytes 75 1E: jne 0x587e3958
        __asm _emit 0x75
        __asm _emit 0x1e
        test edi, edi
        ; Exact mapped bytes 75 1A: jne 0x587e3958
        __asm _emit 0x75
        __asm _emit 0x1a
        push edi
        push edi
        push edi
        push 57dh
        ; Exact mapped bytes E8 A5 81 F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 13 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x13
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 2E: jmp 0x587e3986
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx]
        push edi
        push ebp
        push ecx
        ; Exact mapped bytes EB 18: jmp 0x587e397b
        __asm _emit 0xeb
        __asm _emit 0x18
        xor edx, edx
        push edi
        mov byte ptr [esp + 14h], 0
        mov byte ptr [esp + 15h], 0
        ; Exact mapped bytes 66 89 54 24 16: mov word ptr [esp + 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        mov eax, dword ptr [esp + 14h]
        push ebp
        push eax
        mov ecx, dword ptr [esi + 0da8h]
        ; Exact mapped bytes E8 AA 69 0D 00: call 0x588ba330
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x69
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 FF 1C: cmp di, 0x1c
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0x1c
        ; Exact mapped bytes 0F 85 E0 00 00 00: jne 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1ch
        lea ebp, [esi + 574h]
        mov dword ptr [esp + 10h], 4
        mov eax, dword ptr [ebp]
        cmp ebx, eax
        ; Exact mapped bytes 75 27: jne 0x587e39d5
        __asm _emit 0x75
        __asm _emit 0x27
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 1E: je 0x587e39d5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 0d78h]
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db0h]
        push 1
        push 0
        push edi
        push edx
        push 0dh
        ; Exact mapped bytes E8 8B 53 FB FF: call 0x58798d60
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        inc edi
        add ebp, 4
        sub dword ptr [esp + 10h], 1
        ; Exact mapped bytes 75 C7: jne 0x587e39a7
        __asm _emit 0x75
        __asm _emit 0xc7
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x587e3a74
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 0cc4h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x587e3a74
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 0cc0h]
        ; Exact mapped bytes 66 8B 52 04: mov dx, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x04
        mov edi, 3e0h
        ; Exact mapped bytes 66 23 D7: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd7
        ; Exact mapped bytes 66 83 FA 40: cmp dx, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x40
        ; Exact mapped bytes 74 53: je 0x587e3a5d
        __asm _emit 0x74
        __asm _emit 0x53
        cmp dword ptr [eax + 0ccch], 0
        ; Exact mapped bytes 74 2F: je 0x587e3a42
        __asm _emit 0x74
        __asm _emit 0x2f
        add ecx, 4
        push ecx
        mov ecx, dword ptr [esi + 0da8h]
        ; Exact mapped bytes E8 BE 68 F5 FF: call 0x5873a2e0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0d78h]
        mov ecx, dword ptr [eax + 0ccch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [esi + 0da8h]
        push 1
        push 0
        push edx
        ; Exact mapped bytes E8 F0 68 0D 00: call 0x588ba330
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes EB 32: jmp 0x587e3a74
        __asm _emit 0xeb
        __asm _emit 0x32
        push 1
        push 0
        push 0
        push eax
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db0h]
        push 3
        ; Exact mapped bytes E8 05 53 FB FF: call 0x58798d60
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x53
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x587e3a74
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 478h
        ; Exact mapped bytes E8 83 80 F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BC 12 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 3B 1D BC 45 A2 58: cmp ebx, dword ptr [0x58a245bc]
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 BD 06 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 5a0h]
        ; Exact mapped bytes 75 0C: jne 0x587e3a94
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, esi
        ; Exact mapped bytes E8 91 71 FF FF: call 0x587dac20
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 06 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 59ch]
        ; Exact mapped bytes 75 0C: jne 0x587e3aa8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, esi
        ; Exact mapped bytes E8 DD 72 FF FF: call 0x587dad80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 95 06 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 5d0h]
        ; Exact mapped bytes 0F 85 BA 03 00 00: jne 0x587e3e6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0d78h]
        test eax, eax
        ; Exact mapped bytes 0F 84 7B 06 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0cc0h]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [eax + 0a70h]
        imul edx, edx, 3e8h
        xor ecx, 0aaaaaaaah
        cmp edx, ecx
        ; Exact mapped bytes 0F 82 F2 02 00 00: jb 0x587e3dd7
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ccch]
        ; Exact mapped bytes 66 83 78 20 02: cmp word ptr [eax + 0x20], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x20
        __asm _emit 0x02
        ; Exact mapped bytes 75 37: jne 0x587e3b29
        __asm _emit 0x75
        __asm _emit 0x37
        ; Exact mapped bytes 66 83 78 22 0D: cmp word ptr [eax + 0x22], 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x0d
        ; Exact mapped bytes 75 30: jne 0x587e3b29
        __asm _emit 0x75
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0ch
        push 1
        ; Exact mapped bytes E8 F8 8D 09 00: call 0x5887c900
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 1C: je 0x587e3b29
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 1b59h
        ; Exact mapped bytes E8 D3 7F F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0C 12 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x12
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 14 06 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + 9a4h]
        test eax, eax
        ; Exact mapped bytes 0F 84 90 02 00 00: je 0x587e3dcd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0a4h]
        and eax, 0fffffffeh
        cmp eax, 8eh
        ; Exact mapped bytes 75 26: jne 0x587e3b73
        __asm _emit 0x75
        __asm _emit 0x26
        push 0
        push 0
        push 5899bb90h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 89 7F F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x7f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 11 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 CA 05 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 29h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x587e3b9c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587e3b9c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x587e3b9e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 E6 3D 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x587e3bce
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587e3bce
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0a4h]
        ; Exact mapped bytes EB 02: jmp 0x587e3bd0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 2ah
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x587e3c02
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587e3c02
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 0a8h]
        ; Exact mapped bytes EB 02: jmp 0x587e3c04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 80 3D 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x587e3c34
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x587e3c34
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes EB 02: jmp 0x587e3c36
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        ; Exact mapped bytes E8 5A 5A FF FF: call 0x587d96a0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 EE 04 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xee
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 DA 79 FF FF: call 0x587db630
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 DE 04 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 8A 77 FF FF: call 0x587db3f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 CE 04 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 9A 5C FF FF: call 0x587d9910
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 BE 04 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 BA 63 FF FF: call 0x587da040
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 AF 04 00 00: je 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 8B 7B FF FF: call 0x587db820
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 1C: je 0x587e3cb6
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        push 0
        push 0
        push 126ch
        ; Exact mapped bytes E8 46 7E F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 10 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x10
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 87 04 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0d78h]
        xor ebx, ebx
        xor ebp, ebp
        ; Exact mapped bytes E8 2B 28 10 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x28
        __asm _emit 0x10
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 59: jle 0x587e3d22
        __asm _emit 0x7e
        __asm _emit 0x59
        mov edi, 9a4h
        mov edi, edi
        cmp edi, 0a24h
        ; Exact mapped bytes 7D 4A: jge 0x587e3d22
        __asm _emit 0x7d
        __asm _emit 0x4a
        mov ecx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edi + ecx]
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x587e3cf2
        __asm _emit 0x74
        __asm _emit 0x0d
        test dword ptr [eax + 0b4h], 40000000h
        ; Exact mapped bytes 75 16: jne 0x587e3d07
        __asm _emit 0x75
        __asm _emit 0x16
        inc ebx
        mov ecx, dword ptr [esi + 0d78h]
        inc ebp
        add edi, 4
        ; Exact mapped bytes E8 EF 27 10 00: call 0x588e64f0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x27
        __asm _emit 0x10
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 7C CB: jl 0x587e3cd0
        __asm _emit 0x7c
        __asm _emit 0xcb
        ; Exact mapped bytes EB 1B: jmp 0x587e3d22
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [esi + 0d78h]
        mov eax, dword ptr [edx + ebp*4 + 9a4h]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push eax
        ; Exact mapped bytes E8 4E B0 03 00: call 0x5881ed70
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 45 A2 58: mov ecx, dword ptr [0x58a245e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes E8 91 08 FE FF: call 0x587c45c0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 29: je 0x587e3d5d
        __asm _emit 0x74
        __asm _emit 0x29
        push 0
        push 0
        push 0
        push 131h
        ; Exact mapped bytes E8 AC 7D F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 0F F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 E8 67 F5 FF: call 0x5873a540
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes E9 E0 03 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 CC 6C FF FF: call 0x587daa30
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 0dd8h], 0
        ; Exact mapped bytes 74 30: je 0x587e3d9d
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [esi + 0dd8h], 0
        lea edi, [esi + 0ddch]
        mov ebx, 4
        mov ebp, 2
        mov ecx, dword ptr [edi]
        push 0
        ; Exact mapped bytes E8 30 D8 F4 FF: call 0x587315c0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0xff
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 EF: jne 0x587e3d87
        __asm _emit 0x75
        __asm _emit 0xef
        sub ebx, 1
        ; Exact mapped bytes 75 E5: jne 0x587e3d82
        __asm _emit 0x75
        __asm _emit 0xe5
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 500h], 0
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 F8 2F FF FF: call 0x587d6db0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 BC 45 A2 58: mov edx, dword ptr [0x58a245bc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 0ach]
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes EB 42: jmp 0x587e3e0f
        __asm _emit 0xeb
        __asm _emit 0x42
        push 0
        push 0
        push 0
        push 7
        ; Exact mapped bytes EB 0B: jmp 0x587e3de2
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        push 0
        push 0
        push 12dh
        ; Exact mapped bytes E8 09 7D F8 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 42 0F F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D FC 48 A2 58: mov ecx, dword ptr [0x58a248fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [esi + 94h]
        ; Exact mapped bytes E8 90 3B 12 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x3b
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 94h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 0d78h]
        mov edx, dword ptr [ecx + 0cc0h]
        movzx eax, word ptr [edx + 4]
        and eax, 1fh
        cmp eax, 10h
        ; Exact mapped bytes 0F 87 12 03 00 00: ja 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x12
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 587e4160h]
        ; Exact mapped bytes FF 24 85 54 41 7E 58: jmp dword ptr [eax*4 + 0x587e4154]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0x41
        __asm _emit 0x7e
        __asm _emit 0x58
        xor ecx, ecx
        ; Exact mapped bytes 83 3D 68 45 A2 58 02: cmp dword ptr [0x58a24568], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x02
        sete cl
        lea ecx, [ecx + ecx + 4]
        ; Exact mapped bytes 89 0D 94 3E 9C 58: mov dword ptr [0x589c3e94], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes E9 E9 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        ; Exact mapped bytes 83 3D 68 45 A2 58 02: cmp dword ptr [0x58a24568], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x02
        sete dl
        add edx, 2
        ; Exact mapped bytes 89 15 94 3E 9C 58: mov dword ptr [0x589c3e94], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes E9 CF 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 0db8h]
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x587e3f0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 8ch]
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x587e3eaf
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [esi + 0dbch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 85 39 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esi + 0db4h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 4]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 8E 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 31: jne 0x587e3ee5
        __asm _emit 0x75
        __asm _emit 0x31
        cmp dword ptr [esi + 0d78h], 0
        mov ecx, dword ptr [esi + 0dbch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 74 31: je 0x587e3ef6
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 4D 39 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0db4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 58 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 4F 02 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0dbch]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0db4h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 30 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 4dch]
        ; Exact mapped bytes 75 1D: jne 0x587e3f32
        __asm _emit 0x75
        __asm _emit 0x1d
        push 5
        push 0
        push 0
        push 5899bb68h
        push 5899bb60h
        push 0
        ; Exact mapped bytes FF 15 B4 C3 98 58: call dword ptr [0x5898c3b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E9 0B 02 00 00: jmp 0x587e413d
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5a4h]
        cmp ebx, eax
        ; Exact mapped bytes 74 14: je 0x587e3f50
        __asm _emit 0x74
        __asm _emit 0x14
        cmp ebx, dword ptr [esi + 5a8h]
        ; Exact mapped bytes 0F 85 F5 01 00 00: jne 0x587e413d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, eax
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x587e4013
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d78h]
        test edi, edi
        ; Exact mapped bytes 0F 84 8B 01 00 00: je 0x587e40e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, edi
        test ecx, ecx
        ; Exact mapped bytes 75 06: jne 0x587e3f6c
        __asm _emit 0x75
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 75 0A: jne 0x587e3f74
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        cmp edi, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x587e4000
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ce0h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587e3f84
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce4h], eax
        mov edx, dword ptr [eax + 0ce4h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587e3f94
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce0h], ecx
        mov edx, dword ptr [eax + 0ce4h]
        mov dword ptr [ecx + 0ce4h], edx
        mov edx, dword ptr [ecx + 0ce0h]
        mov dword ptr [eax + 0ce0h], edx
        mov dword ptr [ecx + 0ce0h], eax
        cmp dword ptr [eax + 0ce0h], 0
        mov dword ptr [eax + 0ce4h], ecx
        ; Exact mapped bytes 75 09: jne 0x587e3fca
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 4], eax
        cmp dword ptr [ecx + 0ce4h], 0
        ; Exact mapped bytes 75 09: jne 0x587e3fdc
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 8], ecx
        mov edi, dword ptr [esi + 0d78h]
        mov edx, dword ptr [edi + 0cc0h]
        mov ebx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [edx + 35ch]
        cmp dl, byte ptr [ebx + 35ch]
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x587e40db
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ce4h]
        test eax, eax
        ; Exact mapped bytes 0F 85 54 FF FF FF: jne 0x587e3f62
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 D6 00 00 00: jmp 0x587e40e9
        __asm _emit 0xe9
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, dword ptr [esi + 5a8h]
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x587e40e9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0d78h]
        test edi, edi
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x587e40e9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov eax, edi
        test ecx, ecx
        ; Exact mapped bytes 75 06: jne 0x587e403b
        __asm _emit 0x75
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 75 0A: jne 0x587e4043
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        cmp edi, eax
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x587e40cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ce4h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587e4053
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce0h], eax
        mov edx, dword ptr [eax + 0ce0h]
        test edx, edx
        ; Exact mapped bytes 74 06: je 0x587e4063
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [edx + 0ce4h], ecx
        mov edx, dword ptr [eax + 0ce0h]
        mov dword ptr [ecx + 0ce0h], edx
        mov edx, dword ptr [ecx + 0ce4h]
        mov dword ptr [eax + 0ce4h], edx
        mov dword ptr [ecx + 0ce4h], eax
        mov dword ptr [eax + 0ce0h], ecx
        cmp dword ptr [ecx + 0ce0h], 0
        ; Exact mapped bytes 75 09: jne 0x587e4099
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 4], ecx
        cmp dword ptr [eax + 0ce4h], 0
        ; Exact mapped bytes 75 09: jne 0x587e40ab
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 8B 15 F4 47 A2 58: mov edx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [edx + 8], eax
        mov edi, dword ptr [esi + 0d78h]
        mov edx, dword ptr [edi + 0cc0h]
        mov ebx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [edx + 35ch]
        cmp dl, byte ptr [ebx + 35ch]
        ; Exact mapped bytes 74 10: je 0x587e40db
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [eax + 0ce0h]
        test eax, eax
        ; Exact mapped bytes 0F 85 58 FF FF FF: jne 0x587e4031
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0E: jmp 0x587e40e9
        __asm _emit 0xeb
        __asm _emit 0x0e
        push eax
        mov ecx, esi
        mov dword ptr [esi + 0e10h], eax
        ; Exact mapped bytes E8 97 B4 FF FF: call 0x587df580
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 30 60 FF FF: call 0x587da120
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0d84h]
        ; Exact mapped bytes E8 85 97 F8 FF: call 0x5876d880
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 40: jmp 0x587e413d
        __asm _emit 0xeb
        __asm _emit 0x40
        cmp eax, 0ch
        ; Exact mapped bytes 75 3B: jne 0x587e413d
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 31: je 0x587e413d
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [esp + 8ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 E6 FD FF FF: je 0x587e3f01
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 1D: jne 0x587e413d
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes 8B 15 D4 48 A2 58: mov edx, dword ptr [0x58a248d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0ch]
        push edx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 80 47 A2 58: mov ecx, dword ptr [0x58a24780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 7ch]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        xor eax, eax
        ; Exact mapped bytes E8 8C 8A 19 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x8a
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 70h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
