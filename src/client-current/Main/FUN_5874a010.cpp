// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 1466 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874A010 .. +0x5BA bytes.
extern "C" __declspec(naked) void FUN_5874a010_segment_00() {
    __asm {
        push -1
        push 5897e3cch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 3ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, ecx
        mov eax, 1
        cmp dword ptr [ebp + 98h], eax
        ; Exact mapped bytes 0F 85 68 05 00 00: jne 0x5874a5b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 5ch], eax
        ; Exact mapped bytes 75 0C: jne 0x5874a05c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 60h]
        mov ecx, dword ptr [ebp + 58h]
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes EB 0A: jmp 0x5874a066
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 64h]
        mov ecx, dword ptr [ebp + 5ch]
        mov dword ptr [esp + 18h], edx
        mov esi, dword ptr [esp + 60h]
        mov dword ptr [esp + 14h], 0
        test esi, esi
        ; Exact mapped bytes 0F 8C 07 02 00 00: jl 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 9C 45 A2 58: mov ebx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 3A: je 0x5874a0be
        __asm _emit 0x74
        __asm _emit 0x3a
        cmp ecx, esi
        ; Exact mapped bytes 0F 8D F5 01 00 00: jge 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 10490h]
        add eax, dword ptr [ebx + 10488h]
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edi, [ecx + ecx*2]
        mov edx, dword ptr [eax + edx*4]
        mov eax, edx
        xor edx, edx
        div edi
        mov eax, ecx
        imul eax, esi
        cmp edx, eax
        ; Exact mapped bytes 0F 87 C3 01 00 00: ja 0x5874a281
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 50h]
        imul ecx, ecx, 1f4h
        mov eax, 10624dd3h
        imul ecx
        mov ecx, dword ptr [esp + 54h]
        sar edx, 9
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 76 02: jbe 0x5874a0e2
        __asm _emit 0x76
        __asm _emit 0x02
        mov ecx, eax
        mov edx, dword ptr [esp + 58h]
        lea esi, [ecx + edx]
        mov ecx, dword ptr [esp + 64h]
        mov eax, 66666667h
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 1fh
        lea edi, [edx + eax + 1eh]
        mov eax, dword ptr [ebx + 10490h]
        add eax, dword ptr [ebx + 10488h]
        xor edx, edx
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 49 A2 58: mov ecx, dword ptr [0x58a2491c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 0d1b71759h
        mov ecx, dword ptr [ecx + edx*4]
        mul ecx
        shr edx, 0dh
        imul edx, edx, 2710h
        sub ecx, edx
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x5874a1c3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 51eb851fh
        imul edi
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 05: jge 0x5874a150
        __asm _emit 0x7d
        __asm _emit 0x05
        shl esi, 4
        ; Exact mapped bytes EB 6B: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov eax, 51eb851fh
        imul edi
        sar edx, 4
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 08: jge 0x5874a16d
        __asm _emit 0x7d
        __asm _emit 0x08
        add esi, esi
        add esi, esi
        add esi, esi
        ; Exact mapped bytes EB 4E: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, 66666667h
        imul edi
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 06: jge 0x5874a188
        __asm _emit 0x7d
        __asm _emit 0x06
        add esi, esi
        add esi, esi
        ; Exact mapped bytes EB 33: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, 66666667h
        imul edi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 7D 04: jge 0x5874a1a1
        __asm _emit 0x7d
        __asm _emit 0x04
        add esi, esi
        ; Exact mapped bytes EB 1A: jmp 0x5874a1bb
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov ecx, esi
        shl ecx, 4
        sub ecx, esi
        mov eax, 66666667h
        imul ecx
        sar edx, 2
        mov ecx, edx
        shr ecx, 1fh
        add ecx, edx
        mov esi, ecx
        mov dword ptr [esp + 14h], 1
        test esi, esi
        ; Exact mapped bytes 0F 8E D9 03 00 00: jle 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 54h]
        ; Exact mapped bytes DB 85 94 00 00 00: fild dword ptr [ebp + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        cmp edi, esi
        ; Exact mapped bytes DC 0D 18 CF 98 58: fmul qword ptr [0x5898cf18]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        setle cl
        inc ecx
        mov dword ptr [ebp + 98h], ecx
        ; Exact mapped bytes E8 B3 2A 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2a
        __asm _emit 0x23
        __asm _emit 0x00
        sub edi, esi
        mov dword ptr [esp + 60h], eax
        mov dword ptr [ebp + 54h], edi
        ; Exact mapped bytes 79 07: jns 0x5874a1ff
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp + 54h], 0
        mov edx, dword ptr [ebp + 54h]
        mov ecx, dword ptr [ebp + 6ch]
        push edx
        ; Exact mapped bytes E8 35 45 03 00: call 0x5877e740
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x45
        __asm _emit 0x03
        __asm _emit 0x00
        mov edi, 2
        push 11ch
        cmp dword ptr [esp + 60h], edi
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x5874a314
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        ; Exact mapped bytes E8 28 2A 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov ebx, eax
        mov dword ptr [esp + 5ch], ebx
        cmp dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x5874a2c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 44h], edi
        cmp ebx, edi
        ; Exact mapped bytes 0F 84 52 01 00 00: je 0x5874a397
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10524h]
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 31h
        mov dword ptr [esp + 58h], ecx
        ; Exact mapped bytes 7E 14: jle 0x5874a276
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 74 0C: je 0x5874a276
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edi, dword ptr [eax + 190h]
        add edi, 0c40h
        mov edx, dword ptr [ebp + 8]
        push 40h
        push edx
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x5874a372
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 58h]
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        add ecx, 32h
        imul ecx, esi
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub esi, eax
        sub esi, dword ptr [esp + 18h]
        cmp esi, 1
        ; Exact mapped bytes 0F 8D 0B FF FF FF: jge 0x5874a1c3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, 1
        ; Exact mapped bytes E9 09 FF FF FF: jmp 0x5874a1cb
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 44h], 1
        cmp ebx, edi
        ; Exact mapped bytes 0F 84 77 01 00 00: je 0x5874a449
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0ceh
        ; Exact mapped bytes 0F 8E 29 01 00 00: jle 0x5874a420
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 190h], edi
        ; Exact mapped bytes 0F 84 1D 01 00 00: je 0x5874a420
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax + 190h]
        add edi, 3380h
        ; Exact mapped bytes E9 0C 01 00 00: jmp 0x5874a420
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 35 29 23 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x29
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [esp + 14h], 0
        mov ebx, eax
        mov dword ptr [esp + 5ch], ebx
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5874a3da
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 44h], edi
        test ebx, ebx
        ; Exact mapped bytes 74 62: je 0x5874a397
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 32h
        ; Exact mapped bytes 7E 17: jle 0x5874a36a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5874a36a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edi, dword ptr [eax + 190h]
        add edi, 0c80h
        ; Exact mapped bytes EB 02: jmp 0x5874a36c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [ebp + 8]
        push 40h
        push ecx
        ; Exact mapped bytes E8 BF 28 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [ebp + 4]
        mov ecx, dword ptr [esp + 60h]
        sub eax, edx
        push eax
        push ecx
        push edi
        push 0ah
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 1B 0A 01 00: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5874a399
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 33h
        mov dword ptr [esp + 44h], 0ffffffffh
        ; Exact mapped bytes 7E 20: jle 0x5874a3d0
        __asm _emit 0x7e
        __asm _emit 0x20
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 17: je 0x5874a3d0
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0cc0h
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x5874a451
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov dword ptr [eax + 0f8h], ecx
        ; Exact mapped bytes EB 77: jmp 0x5874a451
        __asm _emit 0xeb
        __asm _emit 0x77
        mov dword ptr [esp + 44h], 3
        test ebx, ebx
        ; Exact mapped bytes 74 63: je 0x5874a449
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10524h]
        mov dword ptr [esp + 58h], eax
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], 0cch
        ; Exact mapped bytes 7E 17: jle 0x5874a41e
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0E: je 0x5874a41e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edi, dword ptr [eax + 190h]
        add edi, 3300h
        ; Exact mapped bytes EB 02: jmp 0x5874a420
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [ebp + 8]
        push 40h
        push ecx
        ; Exact mapped bytes E8 0B 28 23 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x28
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        mov ecx, 32h
        idiv ecx
        mov eax, dword ptr [ebp + 4]
        mov ecx, dword ptr [esp + 60h]
        sub eax, edx
        push eax
        push ecx
        push edi
        push 0ah
        push esi
        mov ecx, ebx
        ; Exact mapped bytes E8 67 09 01 00: call 0x5875adb0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esp + 44h], 0ffffffffh
        cmp dword ptr [ebp + 98h], 2
        ; Exact mapped bytes 0F 85 46 01 00 00: jne 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 4ch]
        test esi, esi
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 606ch], 0
        ; Exact mapped bytes 0F 84 2D 01 00 00: je 0x5874a5a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 60h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 CD 29 19 00: call 0x588dce50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x29
        __asm _emit 0x19
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 00 D0 98 58: fld dword ptr [0x5898d000]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 100ch]
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes D9 05 FC CF 98 58: fld dword ptr [0x5898cffc]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 4]
        ; Exact mapped bytes D9 5C 24 20: fstp dword ptr [esp + 0x20]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        and ecx, 1fh
        ; Exact mapped bytes D9 05 F8 CF 98 58: fld dword ptr [0x5898cff8]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 24: fstp dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 05 50 30 9A 58: fld dword ptr [0x589a3050]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 28: fstp dword ptr [esp + 0x28]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes D9 05 F4 CF 98 58: fld dword ptr [0x5898cff4]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 5C 24 2C: fstp dword ptr [esp + 0x2c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x2c
        ; Exact mapped bytes D9 05 F0 CF 98 58: fld dword ptr [0x5898cff0]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 54 24 30: fst dword ptr [esp + 0x30]
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        ; Exact mapped bytes D9 54 24 34: fst dword ptr [esp + 0x34]
        __asm _emit 0xd9
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        ; Exact mapped bytes D9 5C 24 38: fstp dword ptr [esp + 0x38]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x38
        ; Exact mapped bytes D9 44 8C 1C: fld dword ptr [esp + ecx*4 + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x8c
        __asm _emit 0x1c
        ; Exact mapped bytes DB 85 94 00 00 00: fild dword ptr [ebp + 0x94]
        __asm _emit 0xdb
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D E8 CF 98 58: fmul qword ptr [0x5898cfe8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DC 0D E0 CF 98 58: fmul qword ptr [0x5898cfe0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 AF 27 23 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x27
        __asm _emit 0x23
        __asm _emit 0x00
        cdq
        xor eax, edx
        sub eax, edx
        mov edx, dword ptr [esi + 1284h]
        sub dword ptr [esi + 128ch], eax
        xor edx, 0aaaaaaaah
        inc edx
        xor edx, 0aaaaaaaah
        mov dword ptr [esi + 1284h], edx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [esi + 354h]
        cmp dl, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 14: jne 0x5874a53f
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 88h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 1
        push eax
        ; Exact mapped bytes E8 11 FA FF FF: call 0x58749f50
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 34: jne 0x5874a57e
        __asm _emit 0x75
        __asm _emit 0x34
        mov edx, dword ptr [ebp + 94h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 24 FA FF FF: call 0x58749f80
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 126ch]
        xor ecx, 0aaaaaaaah
        mov eax, 51eb851fh
        mul ecx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        shr edx, 5
        push edx
        ; Exact mapped bytes E8 02 BF 09 00: call 0x587e6480
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        movzx edx, byte ptr [esi + 354h]
        mov eax, dword ptr [ebp + 94h]
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        lea eax, [eax + eax*2]
        push edx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 FC F9 FF FF: call 0x58749fa0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [ebp + 98h], 1
        setne al
        ; Exact mapped bytes EB 02: jmp 0x5874a5b4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 34h
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
