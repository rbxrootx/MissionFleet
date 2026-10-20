// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F35C0 .. +0x2FA bytes.
extern "C" __declspec(naked) void FUN_588f35c0() {
    __asm {
        sub esp, 1ch
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 E3 02 00 00: je 0x588f38b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test dword ptr [ecx + 10474h], 10000000h
        push edi
        ; Exact mapped bytes 0F 84 AA 02 00 00: je 0x588f3893
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9F 02 00 00: je 0x588f3893
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E7 30 FE FF: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x30
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 92 02 00 00: je 0x588f3893
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        cmp dword ptr [ecx + 1258h], 0
        ; Exact mapped bytes 75 4B: jne 0x588f3658
        __asm _emit 0x75
        __asm _emit 0x4b
        ; Exact mapped bytes 66 83 B9 64 01 00 00 03: cmp word ptr [ecx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        mov edi, 1
        ; Exact mapped bytes 72 15: jb 0x588f3631
        __asm _emit 0x72
        __asm _emit 0x15
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 35 A4 FE FF: call 0x588dda60
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x588f3631
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 C9 27 EF FF: call 0x587e5e10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x27
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 44 02 00 00: je 0x588f3893
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 1
        ; Exact mapped bytes 0F 85 3B 02 00 00: jne 0x588f3893
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10524h]
        mov edi, dword ptr [ecx + 114h]
        mov eax, 7d000h
        cdq
        idiv edi
        push ebx
        push ebp
        mov ebx, eax
        mov eax, 5dc00h
        cdq
        idiv edi
        mov edx, dword ptr [esi + 5ch]
        mov ebp, eax
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [ecx + 54h]
        add eax, ebx
        sub eax, dword ptr [edx + 4]
        add ecx, ebp
        sub ecx, dword ptr [edx + 8]
        mov edi, eax
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebx
        mov dword ptr [esp + 20h], ecx
        ; Exact mapped bytes 7F 19: jg 0x588f36ba
        __asm _emit 0x7f
        __asm _emit 0x19
        mov eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, ebp
        ; Exact mapped bytes 7F 0E: jg 0x588f36ba
        __asm _emit 0x7f
        __asm _emit 0x0e
        mov ecx, 0fffeh
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E9 AE 01 00 00: jmp 0x588f3868
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes 66 09 46 24: or word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x24
        xor ebp, ebp
        mov dword ptr [esp + 10h], edi
        cmp edi, ebp
        ; Exact mapped bytes 75 04: jne 0x588f36d1
        __asm _emit 0x75
        __asm _emit 0x04
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 74 96 08 00: call 0x5897cd52
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D B8 0F 9A 58: fmul qword ptr [0x589a0fb8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DC 0D 38 CB 98 58: fmul qword ptr [0x5898cb38]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 95 08 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x95
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [esp + 20h], ebp
        mov ebx, eax
        ; Exact mapped bytes 7D 06: jge 0x588f36fd
        __asm _emit 0x7d
        __asm _emit 0x06
        add ebx, 0e10h
        mov eax, 6e5d4c3bh
        imul ebx
        sub edx, ebx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ebx, eax
        push ebx
        lea ecx, [esp + 18h]
        push ecx
        lea edx, [esp + 2ch]
        push edx
        mov dword ptr [esp + 30h], 0fffffd80h
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes E8 6C 88 E7 FF: call 0x5876bfa0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x88
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 20h]
        add esp, 0ch
        cmp ecx, 1f4h
        ; Exact mapped bytes 7E 07: jle 0x588f374a
        __asm _emit 0x7e
        __asm _emit 0x07
        mov ecx, 1f4h
        ; Exact mapped bytes EB 0D: jmp 0x588f3757
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ecx, 0fffffe0ch
        ; Exact mapped bytes 7D 09: jge 0x588f375b
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, 0fffffe0ch
        mov dword ptr [esp + 14h], ecx
        mov eax, dword ptr [esp + 18h]
        cmp eax, 0f0h
        ; Exact mapped bytes 7E 07: jle 0x588f376d
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 0f0h
        ; Exact mapped bytes EB 0C: jmp 0x588f3779
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 0fffffed4h
        ; Exact mapped bytes 7D 09: jge 0x588f377d
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, 0fffffed4h
        mov dword ptr [esp + 18h], eax
        add eax, 180h
        add ecx, 200h
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 FF FA 00 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 64h], ebp
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x588f3827
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        cmp eax, 1f4h
        ; Exact mapped bytes 75 26: jne 0x588f37cb
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 46: je 0x588f37f2
        __asm _emit 0x74
        __asm _emit 0x46
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 4]
        sub eax, 6
        push eax
        sub edx, 73h
        push edx
        ; Exact mapped bytes E8 D1 FA 00 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov dword ptr [eax + 54h], 2
        ; Exact mapped bytes EB 27: jmp 0x588f37f2
        __asm _emit 0xeb
        __asm _emit 0x27
        cmp eax, 0fffffe0ch
        ; Exact mapped bytes 75 20: jne 0x588f37f2
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 19: je 0x588f37f2
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        sub edx, 6
        push edx
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 A4 FA 00 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 58h]
        mov dword ptr [ecx + 54h], ebp
        mov eax, dword ptr [esp + 18h]
        cmp eax, 0dch
        ; Exact mapped bytes 75 10: jne 0x588f380d
        __asm _emit 0x75
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 23: je 0x588f3827
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [esi + 8]
        sub edx, 0fh
        push edx
        ; Exact mapped bytes EB 15: jmp 0x588f3822
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp eax, 0ffffff24h
        ; Exact mapped bytes 75 13: jne 0x588f3827
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 58h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x588f3827
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [esi + 8]
        add eax, 0fh
        push eax
        ; Exact mapped bytes E8 39 FB 00 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 26: je 0x588f3854
        __asm _emit 0x74
        __asm _emit 0x26
        lea eax, [ebx + 19h]
        cdq
        mov edi, 0e10h
        idiv edi
        mov eax, 51eb851fh
        imul edx
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, 47h
        sub edx, eax
        mov dword ptr [ecx + 50h], edx
        mov ecx, dword ptr [esi + 54h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0D: je 0x588f3868
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 50h]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x588f3868
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [eax + 50h]
        mov dword ptr [ecx + 50h], eax
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 43: je 0x588f38b4
        __asm _emit 0x74
        __asm _emit 0x43
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0E: je 0x588f388c
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x588f3871
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        add esp, 1ch
        ret
        pop edi
        pop esi
        add esp, 1ch
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 4E 24: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4e
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 7D F3 00 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 C6 F3 00 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        add esp, 1ch
        ret
    }
}
