// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DF900 .. +0x30A8 bytes.
extern "C" __declspec(naked) void FUN_585df900_585DF900() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58885da7h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 55ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 314h], ecx
        mov eax, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 3F 30 00 00: je 0x585e298f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3f
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 106fch], 0
        ; Exact mapped bytes 0F 84 5F 04 00 00: je 0x585dfdc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 EC EF 00 00: call 0x585ee960
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 B8 35 90 58: cmp eax, dword ptr [0x589035b8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xb8
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 74 12: je 0x585df98e
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 43 DD 00 00: call 0x585ed6d0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 71 60 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp eax, dword ptr [ecx + 10700h]
        ; Exact mapped bytes 0F 84 11 04 00 00: je 0x585dfdc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 4E 60 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x60
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 338h], eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10700h]
        sub ecx, dword ptr [ebp - 338h]
        mov dword ptr [ebp - 318h], ecx
        cmp dword ptr [ebp - 318h], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585dfa75
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 318h], 8
        ; Exact mapped bytes 7D 7F: jge 0x585dfa75
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 318h], -4
        ; Exact mapped bytes 7E 57: jle 0x585dfa56
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 318h], 4
        ; Exact mapped bytes 7D 4E: jge 0x585dfa56
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 7D 0C: jge 0x585dfa1d
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 400h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585dfa48
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 7E 0C: jle 0x585dfa32
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 3cch], 1
        ; Exact mapped bytes EB 0A: jmp 0x585dfa3c
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3cch], 0
        mov edx, dword ptr [ebp - 3cch]
        mov dword ptr [ebp - 400h], edx
        mov eax, dword ptr [ebp - 400h]
        mov dword ptr [ebp - 404h], eax
        ; Exact mapped bytes EB 11: jmp 0x585dfa67
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 318h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 404h], eax
        mov ecx, dword ptr [ebp - 404h]
        mov dword ptr [ebp - 408h], ecx
        ; Exact mapped bytes EB 15: jmp 0x585dfa8a
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 318h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 408h], eax
        mov edx, dword ptr [ebp - 408h]
        mov dword ptr [ebp - 318h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 540h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106fch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 544h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 40 5F EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5f
        __asm _emit 0xeb
        __asm _emit 0xff
        add eax, dword ptr [ebp - 318h]
        mov dword ptr [ebp - 4c4h], eax
        mov ecx, dword ptr [ebp - 4c4h]
        push ecx
        mov ecx, dword ptr [ebp - 540h]
        ; Exact mapped bytes FF 95 BC FA FF FF: call dword ptr [ebp - 0x544]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xbc
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 548h], eax
        lea ecx, [ebp - 390h]
        push ecx
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 6D 2E FF FF: call 0x585d2980
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 0F 84 66 02 00 00: je 0x585dfd87
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 318h], 7d000h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 CB 5E EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        add esi, dword ptr [ebp - 390h]
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 6B 5D EB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 94 5E EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 DA 5B EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 5E: jg 0x585dfbf8
        __asm _emit 0x7f
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 414h], ecx
        imul eax, dword ptr [ebp - 318h], 7d000h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 40 5E EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x5e
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp - 390h]
        mov dword ptr [ebp - 410h], eax
        mov edx, dword ptr [ebp - 410h]
        push edx
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 4B FC EB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x585dfc54
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 41ch], ecx
        imul eax, dword ptr [ebp - 318h], 0fa000h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 E2 5D EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp - 390h]
        mov dword ptr [ebp - 418h], eax
        mov edx, dword ptr [ebp - 418h]
        push edx
        mov ecx, dword ptr [ebp - 41ch]
        ; Exact mapped bytes E8 ED FB EB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        imul eax, dword ptr [ebp - 318h], 5dc00h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 98 5D EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        add esi, dword ptr [ebp - 38ch]
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 18 5C EB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 61 5D EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        add esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 87 5A EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 5E: jg 0x585dfd2b
        __asm _emit 0x7f
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 424h], ecx
        imul eax, dword ptr [ebp - 318h], 5dc00h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 0D 5D EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5d
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp - 38ch]
        mov dword ptr [ebp - 420h], eax
        mov edx, dword ptr [ebp - 420h]
        push edx
        mov ecx, dword ptr [ebp - 424h]
        ; Exact mapped bytes E8 58 A0 ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x585dfd87
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 42ch], ecx
        imul eax, dword ptr [ebp - 318h], 0bb800h
        cdq
        idiv dword ptr [ebp - 338h]
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 AF 5C EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x5c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        add eax, dword ptr [ebp - 38ch]
        mov dword ptr [ebp - 428h], eax
        mov edx, dword ptr [ebp - 428h]
        push edx
        mov ecx, dword ptr [ebp - 42ch]
        ; Exact mapped bytes E8 FA 9F ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9f
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 430h], ecx
        lea edx, [ebp - 568h]
        push edx
        mov ecx, dword ptr [ebp - 430h]
        ; Exact mapped bytes E8 D5 2B FF FF: call 0x585d2980
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10704h], ecx
        mov dword ptr [eax + 10708h], edx
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 1070ch], 0
        ; Exact mapped bytes 0F 84 3C 05 00 00: je 0x585e0311
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3c
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 DA 4B EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 10710h], eax
        ; Exact mapped bytes 75 23: jne 0x585dfe17
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 2B 59 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x59
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 10714h], eax
        ; Exact mapped bytes 0F 84 22 02 00 00: je 0x585e0039
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 98 4B EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4b
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10710h]
        sub edx, eax
        mov dword ptr [ebp - 31ch], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 E3 58 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x58
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10714h]
        sub edx, eax
        mov dword ptr [ebp - 32ch], edx
        cmp dword ptr [ebp - 31ch], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585dfef6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 31ch], 8
        ; Exact mapped bytes 7D 7F: jge 0x585dfef6
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 31ch], -4
        ; Exact mapped bytes 7E 57: jle 0x585dfed7
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 31ch], 4
        ; Exact mapped bytes 7D 4E: jge 0x585dfed7
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 7D 0C: jge 0x585dfe9e
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 398h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585dfec9
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 7E 0C: jle 0x585dfeb3
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 394h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585dfebd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 394h], 0
        mov eax, dword ptr [ebp - 394h]
        mov dword ptr [ebp - 398h], eax
        mov ecx, dword ptr [ebp - 398h]
        mov dword ptr [ebp - 39ch], ecx
        ; Exact mapped bytes EB 11: jmp 0x585dfee8
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 31ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 39ch], eax
        mov edx, dword ptr [ebp - 39ch]
        mov dword ptr [ebp - 3a0h], edx
        ; Exact mapped bytes EB 15: jmp 0x585dff0b
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 31ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 3a0h], eax
        mov eax, dword ptr [ebp - 3a0h]
        mov dword ptr [ebp - 31ch], eax
        cmp dword ptr [ebp - 32ch], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585dffac
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 32ch], 8
        ; Exact mapped bytes 7D 7F: jge 0x585dffac
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 32ch], -4
        ; Exact mapped bytes 7E 57: jle 0x585dff8d
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 32ch], 4
        ; Exact mapped bytes 7D 4E: jge 0x585dff8d
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 32ch], 0
        ; Exact mapped bytes 7D 0C: jge 0x585dff54
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 3a8h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585dff7f
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 32ch], 0
        ; Exact mapped bytes 7E 0C: jle 0x585dff69
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 3a4h], 1
        ; Exact mapped bytes EB 0A: jmp 0x585dff73
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3a4h], 0
        mov ecx, dword ptr [ebp - 3a4h]
        mov dword ptr [ebp - 3a8h], ecx
        mov edx, dword ptr [ebp - 3a8h]
        mov dword ptr [ebp - 3ach], edx
        ; Exact mapped bytes EB 11: jmp 0x585dff9e
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 32ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3ach], eax
        mov eax, dword ptr [ebp - 3ach]
        mov dword ptr [ebp - 3b0h], eax
        ; Exact mapped bytes EB 15: jmp 0x585dffc1
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 32ch]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 3b0h], eax
        mov ecx, dword ptr [ebp - 3b0h]
        mov dword ptr [ebp - 32ch], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 434h], eax
        mov ecx, dword ptr [ebp - 32ch]
        push ecx
        mov edx, dword ptr [ebp - 31ch]
        push edx
        mov ecx, dword ptr [ebp - 434h]
        ; Exact mapped bytes E8 98 4E 00 00: call 0x585e4e90
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 438h], ecx
        lea edx, [ebp - 560h]
        push edx
        mov ecx, dword ptr [ebp - 438h]
        ; Exact mapped bytes E8 63 29 FF FF: call 0x585d2980
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10704h], ecx
        mov dword ptr [eax + 10708h], edx
        ; Exact mapped bytes E9 D3 02 00 00: jmp 0x585e030c
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 1070ch], 0
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 590h], 0
        ; Exact mapped bytes 0F 84 B0 02 00 00: je 0x585e030c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 590h], 0
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 7
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x585e013a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + ecx + 10dd8h]
        ; Exact mapped bytes E8 24 6E F0 FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x6e
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 10dd8h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ecx + edx + 10dd8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + eax + 10dd8h]
        ; Exact mapped bytes E8 D9 6D F0 FF: call 0x584e6ec0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 314h]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [eax + edx + 10dd8h]
        mov edx, dword ptr [esi + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10de0h]
        mov dword ptr [ebp - 43ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 43ch]
        ; Exact mapped bytes E8 59 5E EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 63: jmp 0x585e019d
        __asm _emit 0xeb
        __asm _emit 0x63
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + eax + 10dd8h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 314h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + ecx + 10dd8h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx + 10dd8h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [edx + ecx + 10dd8h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes 8B 0D D0 20 96 58: mov ecx, dword ptr [0x589620d0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 48 FF FF: call 0x585d4a60
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x585e01d8
        __asm _emit 0x75
        __asm _emit 0x2b
        ; Exact mapped bytes C7 05 74 20 96 58 01 00 00 00: mov dword ptr [0x58962074], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E 90 ED FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0xed
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 2
        ; Exact mapped bytes 75 0C: jne 0x585e01d6
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5B F4 09 00: call 0x5867f630
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0x09
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0A: jmp 0x585e01e2
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 74 20 96 58 00 00 00 00: mov dword ptr [0x58962074], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 75 12: jne 0x585e0206
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 220e0h]
        ; Exact mapped bytes E8 3B B0 EE FF: call 0x584cb240
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb0
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 374h], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 BC EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbc
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        ; Exact mapped bytes EB 11: jmp 0x585e0234
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 02 BF EA FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xbf
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 33ch], eax
        cmp dword ptr [ebp - 33ch], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x585e030c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 F4 1D 18 00: call 0x58762040
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1d
        __asm _emit 0x18
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x585e02f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 33ch]
        ; Exact mapped bytes E8 4E 25 18 00: call 0x587627b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x25
        __asm _emit 0x18
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x585e02f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 68h
        ; Exact mapped bytes E8 93 0D 25 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x0d
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 3b4h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 3b4h], 0
        ; Exact mapped bytes 74 32: je 0x585e02bc
        __asm _emit 0x74
        __asm _emit 0x32
        push 2ee0h
        push 300h
        push 400h
        mov ecx, dword ptr [ebp - 314h]
        push ecx
        mov edx, dword ptr [ebp - 33ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 3b4h]
        ; Exact mapped bytes E8 EC F1 19 00: call 0x5877f4a0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf1
        __asm _emit 0x19
        __asm _emit 0x00
        mov dword ptr [ebp - 3b8h], eax
        ; Exact mapped bytes EB 0A: jmp 0x585e02c6
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3b8h], 0
        mov eax, dword ptr [ebp - 3b8h]
        mov dword ptr [ebp - 440h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 440h]
        mov dword ptr [ebp - 444h], ecx
        mov edx, dword ptr [ebp - 374h]
        push edx
        mov ecx, dword ptr [ebp - 444h]
        ; Exact mapped bytes E8 E9 5D EA FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 374h]
        add eax, 1
        mov dword ptr [ebp - 374h], eax
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x585e0223
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 24 02 00 00: jmp 0x585e0535
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 9E 46 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        cmp eax, dword ptr [edx + 10704h]
        ; Exact mapped bytes 75 23: jne 0x585e0353
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 EF 53 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        cmp eax, dword ptr [ecx + 10708h]
        ; Exact mapped bytes 0F 84 E2 01 00 00: je 0x585e0535
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 5C 46 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10704h]
        sub edx, eax
        mov dword ptr [ebp - 324h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 A7 53 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10708h]
        sub edx, eax
        mov dword ptr [ebp - 320h], edx
        cmp dword ptr [ebp - 324h], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585e0432
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 324h], 8
        ; Exact mapped bytes 7D 7F: jge 0x585e0432
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 324h], -4
        ; Exact mapped bytes 7E 57: jle 0x585e0413
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 324h], 4
        ; Exact mapped bytes 7D 4E: jge 0x585e0413
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 324h], 0
        ; Exact mapped bytes 7D 0C: jge 0x585e03da
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 3c0h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585e0405
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 324h], 0
        ; Exact mapped bytes 7E 0C: jle 0x585e03ef
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 3bch], 1
        ; Exact mapped bytes EB 0A: jmp 0x585e03f9
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3bch], 0
        mov eax, dword ptr [ebp - 3bch]
        mov dword ptr [ebp - 3c0h], eax
        mov ecx, dword ptr [ebp - 3c0h]
        mov dword ptr [ebp - 3c4h], ecx
        ; Exact mapped bytes EB 11: jmp 0x585e0424
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 324h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3c4h], eax
        mov edx, dword ptr [ebp - 3c4h]
        mov dword ptr [ebp - 3c8h], edx
        ; Exact mapped bytes EB 15: jmp 0x585e0447
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 324h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 3c8h], eax
        mov eax, dword ptr [ebp - 3c8h]
        mov dword ptr [ebp - 324h], eax
        cmp dword ptr [ebp - 320h], -8
        ; Exact mapped bytes 0F 8E 88 00 00 00: jle 0x585e04e8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 320h], 8
        ; Exact mapped bytes 7D 7F: jge 0x585e04e8
        __asm _emit 0x7d
        __asm _emit 0x7f
        cmp dword ptr [ebp - 320h], -4
        ; Exact mapped bytes 7E 57: jle 0x585e04c9
        __asm _emit 0x7e
        __asm _emit 0x57
        cmp dword ptr [ebp - 320h], 4
        ; Exact mapped bytes 7D 4E: jge 0x585e04c9
        __asm _emit 0x7d
        __asm _emit 0x4e
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 7D 0C: jge 0x585e0490
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 3d0h], 0ffffffffh
        ; Exact mapped bytes EB 2B: jmp 0x585e04bb
        __asm _emit 0xeb
        __asm _emit 0x2b
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 7E 0C: jle 0x585e04a5
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 3ech], 1
        ; Exact mapped bytes EB 0A: jmp 0x585e04af
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 3ech], 0
        mov ecx, dword ptr [ebp - 3ech]
        mov dword ptr [ebp - 3d0h], ecx
        mov edx, dword ptr [ebp - 3d0h]
        mov dword ptr [ebp - 3d4h], edx
        ; Exact mapped bytes EB 11: jmp 0x585e04da
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 320h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 3d4h], eax
        mov eax, dword ptr [ebp - 3d4h]
        mov dword ptr [ebp - 3d8h], eax
        ; Exact mapped bytes EB 15: jmp 0x585e04fd
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 320h]
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov dword ptr [ebp - 3d8h], eax
        mov ecx, dword ptr [ebp - 3d8h]
        mov dword ptr [ebp - 320h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 448h], eax
        mov ecx, dword ptr [ebp - 320h]
        push ecx
        mov edx, dword ptr [ebp - 324h]
        push edx
        mov ecx, dword ptr [ebp - 448h]
        ; Exact mapped bytes E8 5C 49 00 00: call 0x585e4e90
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 7A 44 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 46h
        ; Exact mapped bytes 7F 3B: jg 0x585e0586
        __asm _emit 0x7f
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10704h], 46h
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 44ch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10704h]
        push edx
        mov ecx, dword ptr [ebp - 44ch]
        ; Exact mapped bytes E8 BB F2 EB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf2
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 D9 51 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 26 24 FF FF: call 0x585d29d0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        imul esi, esi, 3e8h
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 4D 54 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x54
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        test eax, eax
        ; Exact mapped bytes 0F 8F A5 00 00 00: jg 0x585e0677
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 8D 51 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 DA 23 FF FF: call 0x585d29d0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        test esi, esi
        ; Exact mapped bytes 7E 7B: jle 0x585e0677
        __asm _emit 0x7e
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 63 51 EB FF: call 0x58495770
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 B0 52 EB FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 D9 53 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10704h], esi
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 450h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10704h]
        push eax
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 CA F1 EB FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xf1
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 A8 50 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 20h
        ; Exact mapped bytes 7F 3B: jg 0x585e06c8
        __asm _emit 0x7f
        __asm _emit 0x3b
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10708h], 20h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 454h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10708h]
        push eax
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 B9 96 ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x96
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 77 50 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 C4 22 FF FF: call 0x585d29b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        imul esi, esi, 3e8h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 0B 53 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x53
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        test eax, eax
        ; Exact mapped bytes 0F 8F A5 00 00 00: jg 0x585e07b9
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 2B 50 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 78 22 FF FF: call 0x585d29b0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        test esi, esi
        ; Exact mapped bytes 7E 7B: jle 0x585e07b9
        __asm _emit 0x7e
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 01 50 EB FF: call 0x58495750
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x50
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 4E 51 EB FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x51
        __asm _emit 0xeb
        __asm _emit 0xff
        imul edi, eax, 3e8h
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 97 52 EB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x52
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edi
        cdq
        idiv ecx
        sub esi, eax
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10708h], esi
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106fch]
        mov dword ptr [ebp - 458h], ecx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10708h]
        push eax
        mov ecx, dword ptr [ebp - 458h]
        ; Exact mapped bytes E8 C8 95 ED FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x95
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 1
        ; Exact mapped bytes 74 1E: je 0x585e07f1
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 4
        ; Exact mapped bytes 0F 85 B0 03 00 00: jne 0x585e0ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585e08af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx + 5ch]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 7E 4A: jle 0x585e0867
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx + 5ch]
        sub eax, dword ptr [edx + 2ch]
        cmp eax, 20h
        ; Exact mapped bytes 7F 18: jg 0x585e084c
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 67 4D 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585e0865
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 2ch]
        add ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 4C 4D 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x585e08af
        __asm _emit 0xeb
        __asm _emit 0x48
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 2ch]
        sub ecx, dword ptr [eax + 5ch]
        cmp ecx, 20h
        ; Exact mapped bytes 7F 18: jg 0x585e0896
        __asm _emit 0x7f
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 5ch]
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 1D 4D 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585e08af
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 2ch]
        sub edx, 20h
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 02 4D 1D 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x4d
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585e096d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax + 58h]
        cmp edx, dword ptr [ecx + 28h]
        ; Exact mapped bytes 7E 4A: jle 0x585e0925
        __asm _emit 0x7e
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax + 58h]
        sub edx, dword ptr [ecx + 28h]
        cmp edx, 20h
        ; Exact mapped bytes 7F 18: jg 0x585e090a
        __asm _emit 0x7f
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 58h]
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 39 4C 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585e0923
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 28h]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 1E 4C 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 48: jmp 0x585e096d
        __asm _emit 0xeb
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx + 28h]
        sub eax, dword ptr [edx + 58h]
        cmp eax, 20h
        ; Exact mapped bytes 7F 18: jg 0x585e0954
        __asm _emit 0x7f
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 58h]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 EF 4B 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4b
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x585e096d
        __asm _emit 0xeb
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 28h]
        sub ecx, 20h
        push ecx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 D4 4B 1D 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x4b
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 58h]
        cmp ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 0F 85 1C 02 00 00: jne 0x585e0ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 5ch]
        cmp ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 0F 85 04 02 00 00: jne 0x585e0ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 1
        ; Exact mapped bytes 75 35: jne 0x585e09ec
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 700h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 CA 73 00 00: call 0x585e7db0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x585e0ba1
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 4
        ; Exact mapped bytes 0F 85 97 01 00 00: jne 0x585e0ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov ecx, 0e0ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 55 55 EA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 10d68h], 0
        ; Exact mapped bytes 74 4E: je 0x585e0a99
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10d68h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 10d68h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 314h]
        ; Exact mapped bytes 8B 0D F8 1F 96 58: mov ecx, dword ptr [0x58961ff8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, dword ptr [eax + 10d68h]
        ; Exact mapped bytes 75 0A: jne 0x585e0a89
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 F8 1F 96 58 00 00 00 00: mov dword ptr [0x58961ff8], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d68h], 0
        mov dword ptr [ebp - 34ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e0ab4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 34ch]
        add eax, 1
        mov dword ptr [ebp - 34ch], eax
        cmp dword ptr [ebp - 34ch], 8
        ; Exact mapped bytes 7D 29: jge 0x585e0ae6
        __asm _emit 0x7d
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 34ch]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + ecx*4 + 21ac8h]
        mov dword ptr [ebp - 45ch], eax
        push 0
        mov ecx, dword ptr [ebp - 45ch]
        ; Exact mapped bytes E8 1D 4E 13 00: call 0x58715900
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BF: jmp 0x585e0aa5
        __asm _emit 0xeb
        __asm _emit 0xbf
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 20f08h]
        mov eax, dword ptr [ebp - 314h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 20f08h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 0D 78 75 94 58: mov ecx, dword ptr [0x58947578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 4A FB FF: call 0x58595570
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 05 FD FE FF: call 0x585d0820
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 21014h], 0
        ; Exact mapped bytes 74 2F: je 0x585e0b5a
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21010h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 21010h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 21014h], 0
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21f00h], 0
        ; Exact mapped bytes 74 24: je 0x585e0b8d
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1C 4C EB FF: call 0x58495790
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 FA F6 FF: call 0x585505c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfa
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 21f00h], 0
        ; Exact mapped bytes EB 14: jmp 0x585e0ba1
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 8B 0D 28 06 96 58: mov ecx, dword ptr [0x58960628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 75 0C: jne 0x585e0bc7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 3A 46 00 00: call 0x585e5200
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
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
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 2
        ; Exact mapped bytes 0F 85 E3 1C 00 00: jne 0x585e28c8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 E0 66 EF FF: call 0x584d72d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x66
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x585e0cbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD 5D EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 0A EF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x0a
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x585e0cbb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 5D EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 340h], eax
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 F2 8B 18 00: call 0x58769820
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x8b
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 D7 B0 18 00: call 0x5876bd10
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 0A E9 EB FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FF DC 09 00: call 0x5867e950
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 E4 B7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9D B2 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0xff
        movzx ecx, byte ptr [eax + 4]
        mov edx, dword ptr [ecx*4 + 58948c34h]
        mov dword ptr [ebp - 464h], edx
        mov ecx, dword ptr [ebp - 340h]
        ; Exact mapped bytes E8 C1 B7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xb7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7A B2 EA FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb2
        __asm _emit 0xea
        __asm _emit 0xff
        movzx eax, word ptr [eax]
        mov dword ptr [ebp - 460h], eax
        mov ecx, dword ptr [ebp - 460h]
        push ecx
        mov ecx, dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 0F 29 F4 FF: call 0x585235b0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x29
        __asm _emit 0xf4
        __asm _emit 0xff
        push 40000000h
        push 0
        mov edx, dword ptr [ebp - 340h]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 16 8A 00 00: call 0x585e96d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 21ac0h], 0
        ; Exact mapped bytes 75 4E: jne 0x585e0d18
        __asm _emit 0x75
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 6B 72 FF FF: call 0x585d7f40
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 1077ah]
        cmp edx, 7
        ; Exact mapped bytes 74 20: je 0x585e0d08
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21010h]
        mov dword ptr [ebp - 468h], ecx
        push 1
        mov ecx, dword ptr [ebp - 468h]
        ; Exact mapped bytes E8 99 09 0D 00: call 0x586b16a0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 21ac0h], 1
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0f0000000h
        cmp ecx, 10000000h
        ; Exact mapped bytes 0F 85 65 1A 00 00: jne 0x585e279b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 4
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x585e0dce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 6
        ; Exact mapped bytes 74 70: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ah
        ; Exact mapped bytes 74 5E: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 4C: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 3A: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0eh
        ; Exact mapped bytes 74 28: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0fh
        ; Exact mapped bytes 74 16: je 0x585e0dce
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 10h
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x585e0eb4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 21e40h], 1
        ; Exact mapped bytes 0F 86 A9 00 00 00: jbe 0x585e0e8a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 21e40h]
        sub edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 21e40h], edx
        mov ecx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ecx + 21e40h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        mov dword ptr [ebp - 350h], eax
        mov eax, dword ptr [ebp - 350h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 46ch], eax
        mov eax, dword ptr [ebp - 350h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 350h], edx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21e38h]
        mov dword ptr [ebp - 470h], eax
        mov ecx, dword ptr [ebp - 46ch]
        push ecx
        mov ecx, dword ptr [ebp - 470h]
        ; Exact mapped bytes E8 2D A3 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xa3
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21e3ch]
        mov dword ptr [ebp - 474h], eax
        mov ecx, dword ptr [ebp - 350h]
        push ecx
        mov ecx, dword ptr [ebp - 474h]
        ; Exact mapped bytes E8 09 A3 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa3
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585e0eb4
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21e40h], 1
        ; Exact mapped bytes 75 1B: jne 0x585e0eb4
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21e40h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 21e40h], ecx
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x585e0fb0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21e40h], 1
        ; Exact mapped bytes 0F 86 A9 00 00 00: jbe 0x585e0f86
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21e40h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 21e40h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 21e40h]
        xor edx, edx
        mov ecx, 19h
        div ecx
        mov dword ptr [ebp - 354h], eax
        mov eax, dword ptr [ebp - 354h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 478h], eax
        mov eax, dword ptr [ebp - 354h]
        cdq
        mov ecx, 3ch
        idiv ecx
        mov dword ptr [ebp - 354h], edx
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21e38h]
        mov dword ptr [ebp - 47ch], eax
        mov ecx, dword ptr [ebp - 478h]
        push ecx
        mov ecx, dword ptr [ebp - 47ch]
        ; Exact mapped bytes E8 31 A2 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa2
        __asm _emit 0x1d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21e3ch]
        mov dword ptr [ebp - 480h], eax
        mov ecx, dword ptr [ebp - 354h]
        push ecx
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 0D A2 1D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xa2
        __asm _emit 0x1d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585e0fb0
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21e40h], 1
        ; Exact mapped bytes 75 1B: jne 0x585e0fb0
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21e40h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 21e40h], ecx
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 3
        ; Exact mapped bytes 74 1B: je 0x585e0fdd
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106d0h]
        add eax, 1
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 106d0h], eax
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 6
        ; Exact mapped bytes 75 4A: jne 0x585e1039
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 220e0h]
        ; Exact mapped bytes E8 30 92 EE FF: call 0x584ca230
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x92
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 220e0h]
        ; Exact mapped bytes E8 6E 39 EA FF: call 0x58484980
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x39
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x585e1039
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 220e0h]
        ; Exact mapped bytes E8 A9 93 EE FF: call 0x584ca3d0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x93
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 220e0h]
        ; Exact mapped bytes E8 18 A4 EE FF: call 0x584cb450
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xa4
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21a9ch], 0
        ; Exact mapped bytes 75 14: jne 0x585e105c
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 DD 48 EB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 45 04 00 00: jne 0x585e14a1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 79 CF 00 00: call 0x585edfe0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 BD 48 EB FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x48
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 0F 85 47 02 00 00: jne 0x585e12c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, byte ptr [eax + 21a8dh]
        test ecx, ecx
        ; Exact mapped bytes 75 6C: jne 0x585e10f9
        __asm _emit 0x75
        __asm _emit 0x6c
        mov dword ptr [ebp - 358h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e10a8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 358h]
        add edx, 1
        mov dword ptr [ebp - 358h], edx
        cmp dword ptr [ebp - 358h], 6
        ; Exact mapped bytes 7D 43: jge 0x585e10f4
        __asm _emit 0x7d
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21e24h]
        mov dword ptr [ebp - 484h], ecx
        mov edx, dword ptr [ebp - 358h]
        push edx
        mov ecx, dword ptr [ebp - 484h]
        ; Exact mapped bytes E8 8B 15 FF FF: call 0x585d2660
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 64 15 FF FF: call 0x585d2640
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x585e10f2
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 314h]
        mov byte ptr [ecx + 21a8dh], 1
        ; Exact mapped bytes EB 02: jmp 0x585e10f4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A5: jmp 0x585e1099
        __asm _emit 0xeb
        __asm _emit 0xa5
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x585e12c3
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, byte ptr [edx + 21a8dh]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B4 01 00 00: jne 0x585e12c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 21a90h], 0
        ; Exact mapped bytes 75 12: jne 0x585e1130
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 21a90h], eax
        ; Exact mapped bytes FF 15 24 45 89 58: call dword ptr [0x58894524]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 35ch], eax
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 35ch]
        sub ecx, dword ptr [eax + 21a90h]
        cmp ecx, 0ah
        ; Exact mapped bytes 73 44: jae 0x585e1197
        __asm _emit 0x73
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21a94h]
        mov dword ptr [ebp - 488h], eax
        push 1
        mov ecx, dword ptr [ebp - 488h]
        ; Exact mapped bytes E8 6E 4D EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 21a98h]
        mov dword ptr [ebp - 48ch], edx
        push 1
        mov ecx, dword ptr [ebp - 48ch]
        ; Exact mapped bytes E8 4F 4D EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x585e12c3
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 35ch]
        sub ecx, dword ptr [eax + 21a90h]
        cmp ecx, 0bb8h
        ; Exact mapped bytes 72 60: jb 0x585e1211
        __asm _emit 0x72
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21a94h]
        mov dword ptr [ebp - 490h], eax
        push 0
        mov ecx, dword ptr [ebp - 490h]
        ; Exact mapped bytes E8 10 4D EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 21a98h]
        mov dword ptr [ebp - 494h], edx
        push 0
        mov ecx, dword ptr [ebp - 494h]
        ; Exact mapped bytes E8 F1 4C EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov byte ptr [eax + 21a8dh], 0
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 21a90h], 0
        ; Exact mapped bytes E9 B2 00 00 00: jmp 0x585e12c3
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 35ch]
        sub eax, dword ptr [edx + 21a90h]
        cmp eax, 7d0h
        ; Exact mapped bytes 72 41: jb 0x585e126b
        __asm _emit 0x72
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 21a94h]
        mov dword ptr [ebp - 498h], edx
        push 1
        mov ecx, dword ptr [ebp - 498h]
        ; Exact mapped bytes E8 97 4C EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21a98h]
        mov dword ptr [ebp - 49ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 49ch]
        ; Exact mapped bytes E8 78 4C EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 58: jmp 0x585e12c3
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 35ch]
        sub eax, dword ptr [edx + 21a90h]
        cmp eax, 3e8h
        ; Exact mapped bytes 72 3F: jb 0x585e12c3
        __asm _emit 0x72
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 21a94h]
        mov dword ptr [ebp - 4a0h], edx
        push 0
        mov ecx, dword ptr [ebp - 4a0h]
        ; Exact mapped bytes E8 3D 4C EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 21a98h]
        mov dword ptr [ebp - 4a4h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4a4h]
        ; Exact mapped bytes E8 1E 4C EA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F2 56 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1B 37 FF FF: call 0x585d49f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C4 01 00 00: je 0x585e14a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 78 16 FF FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x585e14a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 334h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e130e
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 334h]
        add eax, 1
        mov dword ptr [ebp - 334h], eax
        cmp dword ptr [ebp - 334h], 8
        ; Exact mapped bytes 7D 48: jge 0x585e135f
        __asm _emit 0x7d
        __asm _emit 0x48
        mov ecx, dword ptr [ebp - 334h]
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + ecx*4 + 29ch], 0
        ; Exact mapped bytes 74 30: je 0x585e135d
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 56 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        mov eax, dword ptr [ebp - 334h]
        push eax
        mov ecx, dword ptr [ebp - 4a8h]
        ; Exact mapped bytes E8 B0 A9 EA FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 89 AB EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xab
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x585e135d
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585e135f
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB A0: jmp 0x585e12ff
        __asm _emit 0xeb
        __asm _emit 0xa0
        cmp dword ptr [ebp - 334h], 8
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x585e14a1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 378h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 56 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], eax
        mov ecx, dword ptr [ebp - 334h]
        push ecx
        mov ecx, dword ptr [ebp - 4ach]
        ; Exact mapped bytes E8 67 A9 EA FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xa9
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 20 56 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x56
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        ; Exact mapped bytes EB 11: jmp 0x585e13b9
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 FD AC EA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xac
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 344h], eax
        cmp dword ptr [ebp - 344h], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x585e144b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 0F AB EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xab
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E8 55 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 554h], eax
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 F7 AA EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xaa
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 10 BD EA FF: call 0x5848d100
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 21e24h]
        mov dword ptr [ebp - 4b0h], eax
        push 0
        lea ecx, [ebp - 554h]
        push ecx
        mov ecx, dword ptr [ebp - 4b0h]
        ; Exact mapped bytes E8 14 E3 F2 FF: call 0x5850f730
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xe3
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x585e143a
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 344h]
        ; Exact mapped bytes E8 B5 AA EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xaa
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 17 FF FF: call 0x585d2c10
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        cmp edx, 4
        ; Exact mapped bytes 7C 0C: jl 0x585e1446
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov dword ptr [ebp - 378h], 0
        ; Exact mapped bytes EB 05: jmp 0x585e144b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5D FF FF FF: jmp 0x585e13a8
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 0A 15 FF FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x585e1477
        __asm _emit 0x75
        __asm _emit 0x19
        cmp dword ptr [ebp - 378h], 0
        ; Exact mapped bytes 74 0E: je 0x585e1475
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 CC 5D 00 00: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2A: jmp 0x585e14a1
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 DE 14 FF FF: call 0x585d2960
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 2
        ; Exact mapped bytes 75 17: jne 0x585e14a1
        __asm _emit 0x75
        __asm _emit 0x17
        cmp dword ptr [ebp - 378h], 0
        ; Exact mapped bytes 75 0E: jne 0x585e14a1
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 A0 5D 00 00: call 0x585e7240
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 10d7ch], 0ah
        ; Exact mapped bytes 0F 85 DF 01 00 00: jne 0x585e1693
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 10d84h]
        cdq
        mov ecx, 3
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 C3 01 00 00: jne 0x585e1693
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 0F 84 AE 01 00 00: je 0x585e1693
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d68h]
        mov dword ptr [ebp - 4b4h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10d68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4b8h], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d8ch]
        neg edx
        imul eax, edx, 64h
        ; Exact mapped bytes 03 05 64 20 96 58: add eax, dword ptr [0x58962064]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp - 4b4h]
        ; Exact mapped bytes FF 95 48 FB FF FF: call dword ptr [ebp - 0x4b8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x48
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d8ch]
        add edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d8ch], edx
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 10d8ch], 28h
        ; Exact mapped bytes 0F 85 2E 01 00 00: jne 0x585e168e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d7ch], 0bh
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d8ch], 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d68h]
        mov eax, dword ptr [ebp - 314h]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 10d68h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d80h]
        mov dword ptr [ebp - 37ch], edx
        cmp dword ptr [ebp - 37ch], 14h
        ; Exact mapped bytes 74 14: je 0x585e15cf
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 37ch], 15h
        ; Exact mapped bytes 74 25: je 0x585e15e9
        __asm _emit 0x74
        __asm _emit 0x25
        cmp dword ptr [ebp - 37ch], 16h
        ; Exact mapped bytes 74 36: je 0x585e1603
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes EB 4E: jmp 0x585e161d
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d6ch]
        mov dword ptr [eax + 10d68h], edx
        ; Exact mapped bytes EB 4C: jmp 0x585e1635
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d70h]
        mov dword ptr [eax + 10d68h], edx
        ; Exact mapped bytes EB 32: jmp 0x585e1635
        __asm _emit 0xeb
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d74h]
        mov dword ptr [eax + 10d68h], edx
        ; Exact mapped bytes EB 18: jmp 0x585e1635
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d6ch]
        mov dword ptr [eax + 10d68h], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10d68h]
        ; Exact mapped bytes 89 0D F8 1F 96 58: mov dword ptr [0x58961ff8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10d68h]
        mov dword ptr [ebp - 4bch], eax
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10d68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4c0h], ecx
        push 1
        mov ecx, dword ptr [ebp - 4bch]
        ; Exact mapped bytes FF 95 40 FB FF FF: call dword ptr [ebp - 0x4c0]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x40
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d84h], 1
        ; Exact mapped bytes E9 02 03 00 00: jmp 0x585e1995
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 10d78h], 0
        ; Exact mapped bytes 0F 85 EF 02 00 00: jne 0x585e1995
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 10d84h], 0fah
        ; Exact mapped bytes 0F 8C D9 02 00 00: jl 0x585e1995
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 0F 84 C4 02 00 00: je 0x585e1995
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 52 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x52
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 380h], eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 F3 9E F7 FF: call 0x5855b5e0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x9e
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 384h], eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 42 AD EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xad
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B E0 EC FF: call 0x584af750
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 348h], eax
        mov ecx, dword ptr [ebp - 380h]
        ; Exact mapped bytes E8 2A AD EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xad
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 93 39 EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x39
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 3e8h], eax
        mov ecx, dword ptr [ebp - 384h]
        cmp ecx, dword ptr [ebp - 348h]
        ; Exact mapped bytes 76 35: jbe 0x585e1766
        __asm _emit 0x76
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d7ch], 0ah
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d80h], 15h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d78h], 1
        ; Exact mapped bytes E9 1F 02 00 00: jmp 0x585e1985
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 85 18 FC FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x3e8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 348h]
        mov dword ptr [ebp - 3dch], edx
        ; Exact mapped bytes F2 0F 2A 8D 24 FC FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x3dc]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x24
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 3dch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 0C C5 70 4D 89 58: addsd xmm1, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D 90 DA 8A 58: divsd xmm1, qword ptr [0x588ada90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 86 AB 00 00 00: jbe 0x585e1851
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 3e0h], ecx
        ; Exact mapped bytes F2 0F 2A 85 20 FC FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x3e0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3e0h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 348h]
        shl eax, 1
        mov dword ptr [ebp - 3e4h], eax
        ; Exact mapped bytes F2 0F 2A 8D 1C FC FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x3e4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3e4h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 0C CD 70 4D 89 58: addsd xmm1, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D 90 DA 8A 58: divsd xmm1, qword ptr [0x588ada90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 4F: jbe 0x585e1851
        __asm _emit 0x76
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 10d68h]
        cmp ecx, dword ptr [eax + 10d6ch]
        ; Exact mapped bytes 75 30: jne 0x585e184c
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d7ch], 0ah
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d80h], 16h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d78h], 0
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x585e1985
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes F2 0F 2A 85 18 FC FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x3e8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x18
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 348h]
        shl edx, 1
        mov dword ptr [ebp - 40ch], edx
        ; Exact mapped bytes F2 0F 2A 8D F4 FB FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x40c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 40ch]
        shr eax, 1fh
        ; Exact mapped bytes F2 0F 58 0C C5 70 4D 89 58: addsd xmm1, qword ptr [eax*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xc5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D 90 DA 8A 58: divsd xmm1, qword ptr [0x588ada90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 86 A8 00 00 00: jbe 0x585e193b
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 384h]
        mov dword ptr [ebp - 3f0h], ecx
        ; Exact mapped bytes F2 0F 2A 85 10 FC FF FF: cvtsi2sd xmm0, dword ptr [ebp - 0x3f0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 3f0h]
        shr edx, 1fh
        ; Exact mapped bytes F2 0F 58 04 D5 70 4D 89 58: addsd xmm0, qword ptr [edx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0xd5
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 348h]
        shl eax, 1
        mov dword ptr [ebp - 3f4h], eax
        ; Exact mapped bytes F2 0F 2A 8D 0C FC FF FF: cvtsi2sd xmm1, dword ptr [ebp - 0x3f4]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x2a
        __asm _emit 0x8d
        __asm _emit 0x0c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 3f4h]
        shr ecx, 1fh
        ; Exact mapped bytes F2 0F 58 0C CD 70 4D 89 58: addsd xmm1, qword ptr [ecx*8 + 0x58894d70]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x58
        __asm _emit 0x0c
        __asm _emit 0xcd
        __asm _emit 0x70
        __asm _emit 0x4d
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 5E 0D 90 DA 8A 58: divsd xmm1, qword ptr [0x588ada90]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x8a
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F C8: comisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc8
        ; Exact mapped bytes 76 4C: jbe 0x585e193b
        __asm _emit 0x76
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 10d68h]
        cmp ecx, dword ptr [eax + 10d74h]
        ; Exact mapped bytes 75 30: jne 0x585e1939
        __asm _emit 0x75
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d7ch], 0ah
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d80h], 14h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d78h], 0
        ; Exact mapped bytes EB 4A: jmp 0x585e1985
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [edx + 10d68h]
        cmp ecx, dword ptr [eax + 10d6ch]
        ; Exact mapped bytes 74 30: je 0x585e1985
        __asm _emit 0x74
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d7ch], 0ah
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d80h], 14h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d78h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d84h], 1
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 10d84h], 0fah
        ; Exact mapped bytes 7C 10: jl 0x585e19b7
        __asm _emit 0x7c
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d84h], 1
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10d84h]
        add eax, 1
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10d84h], eax
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 10d88h], 7dh
        ; Exact mapped bytes 0F 8C C1 00 00 00: jl 0x585e1aa6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10d88h], 1
        mov dword ptr [ebp - 330h], 0
        ; Exact mapped bytes EB 0F: jmp 0x585e1a10
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 330h]
        add ecx, 1
        mov dword ptr [ebp - 330h], ecx
        cmp dword ptr [ebp - 330h], 20h
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x585e1aa6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 510h], eax
        mov ecx, dword ptr [ebp - 330h]
        push ecx
        mov ecx, dword ptr [ebp - 510h]
        ; Exact mapped bytes E8 2F 18 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x585e1aa1
        __asm _emit 0x74
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 20e74h]
        mov dword ptr [ebp - 4c8h], eax
        mov ecx, dword ptr [ebp - 330h]
        push ecx
        mov ecx, dword ptr [ebp - 4c8h]
        ; Exact mapped bytes E8 07 18 FF FF: call 0x585d3270
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 E7 EC FF: call 0x584b0170
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe7
        __asm _emit 0xec
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2D: jne 0x585e1aa1
        __asm _emit 0x75
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 330h]
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + edx*4 + 20e78h], 1
        ; Exact mapped bytes 75 17: jne 0x585e1aa1
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 330h]
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + ecx*4 + 20e78h], 0
        ; Exact mapped bytes E9 5B FF FF FF: jmp 0x585e1a01
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10d88h]
        add ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10d88h], ecx
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, byte ptr [eax + 21018h]
        test ecx, ecx
        ; Exact mapped bytes 75 27: jne 0x585e1af9
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 83 69 FE FF: call 0x585c8460
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov al, byte ptr [edx + 21018h]
        add al, 1
        mov ecx, dword ptr [ebp - 314h]
        mov byte ptr [ecx + 21018h], al
        ; Exact mapped bytes EB 3E: jmp 0x585e1b37
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 314h]
        movzx eax, byte ptr [edx + 21018h]
        cmp eax, 0fah
        ; Exact mapped bytes 7D 1D: jge 0x585e1b2a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 314h]
        mov dl, byte ptr [ecx + 21018h]
        add dl, 1
        mov eax, dword ptr [ebp - 314h]
        mov byte ptr [eax + 21018h], dl
        ; Exact mapped bytes EB 0D: jmp 0x585e1b37
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 314h]
        mov byte ptr [ecx + 21018h], 0
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 21000h], 0
        ; Exact mapped bytes 74 0C: je 0x585e1b52
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 DF FB FE FF: call 0x585d1730
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 5b0h], 0
        ; Exact mapped bytes 74 0C: je 0x585e1b6d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 E4 33 00 00: call 0x585e4f50
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 21ab8h], 0
        ; Exact mapped bytes 74 1F: je 0x585e1b9b
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 200h
        ; Exact mapped bytes 75 0C: jne 0x585e1b9b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 76 69 00 00: call 0x585e8510
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 4
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x585e1c5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x585e1c5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x585e1c5f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 5
        ; Exact mapped bytes 74 70: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x70
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0bh
        ; Exact mapped bytes 74 5E: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0dh
        ; Exact mapped bytes 74 4C: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 10h
        ; Exact mapped bytes 74 3A: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0ch
        ; Exact mapped bytes 74 28: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0eh
        ; Exact mapped bytes 74 16: je 0x585e1c5f
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0fh
        ; Exact mapped bytes 0F 85 91 02 00 00: jne 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 106d0h], 0ea6h
        ; Exact mapped bytes 0F 8E 7B 02 00 00: jle 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x7b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0f00h
        ; Exact mapped bytes 0F 85 63 02 00 00: jne 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x63
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 106d4h], 1
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x585e1da3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 106d4h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 1067ch], 1
        push 6
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 4C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 37 62 00 00: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x62
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10678h]
        and ecx, 0fffffffh
        or ecx, 20000000h
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 4C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 A7 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9A 33 EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x33
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4cch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 4C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 09 FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 7A FC FF FF: mov word ptr [ebp - 0x386], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x7a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 4C EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 38 EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x38
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 A2 FC FF FF: mov word ptr [ebp - 0x35e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 4d0h], eax
        push 1
        mov ecx, dword ptr [ebp - 4cch]
        push ecx
        movzx edx, word ptr [ebp - 386h]
        push edx
        movzx eax, word ptr [ebp - 35eh]
        push eax
        mov ecx, dword ptr [ebp - 4d0h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D3 B9 F9 FF: call 0x5857d770
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb9
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x585e1ef0
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 106d4h], 0
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 106d4h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 106d4h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 106d4h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 106d4h], 7dh
        ; Exact mapped bytes 7E 1C: jle 0x585e1e18
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 106d4h]
        cdq
        mov ecx, 7dh
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x585e1ef0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 106d4h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 4d4h], eax
        push 588abf88h
        ; Exact mapped bytes E8 B4 01 F4 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4d8h], eax
        mov edx, dword ptr [ebp - 4d4h]
        push edx
        mov eax, dword ptr [ebp - 4d8h]
        push eax
        lea ecx, [ebp - 310h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 20f10h]
        mov dword ptr [ebp - 4dch], eax
        push 0ffff00h
        lea ecx, [ebp - 310h]
        push ecx
        mov ecx, dword ptr [ebp - 4dch]
        ; Exact mapped bytes E8 44 36 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x36
        __asm _emit 0x1e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 2B EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 4e4h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4e0h], edx
        mov eax, dword ptr [ebp - 4e0h]
        push eax
        mov ecx, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes E8 03 9F 1D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9f
        __asm _emit 0x1d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 2B EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3f8h], eax
        mov ecx, dword ptr [ebp - 3f8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4e8h], eax
        push 0
        mov ecx, dword ptr [ebp - 3f8h]
        ; Exact mapped bytes FF 95 18 FB FF FF: call dword ptr [ebp - 0x4e8]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0f00h
        cmp edx, 100h
        ; Exact mapped bytes 0F 85 9A 03 00 00: jne 0x585e22a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 20f34h], 1
        ; Exact mapped bytes 0F 85 3A 02 00 00: jne 0x585e215b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 20f34h], 0
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 1067ch], 1
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 4
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x585e1ffd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 6
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x585e1ffd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0ah
        ; Exact mapped bytes 74 7E: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 5
        ; Exact mapped bytes 74 6C: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0bh
        ; Exact mapped bytes 74 5A: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0dh
        ; Exact mapped bytes 74 48: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 10h
        ; Exact mapped bytes 74 36: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 0ch
        ; Exact mapped bytes 74 24: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, word ptr [ecx + 107c8h]
        cmp edx, 0eh
        ; Exact mapped bytes 74 12: je 0x585e1ffd
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 0fh
        ; Exact mapped bytes 75 7E: jne 0x585e207b
        __asm _emit 0x75
        __asm _emit 0x7e
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        xor eax, 100h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        push 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 99 49 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x49
        __asm _emit 0xea
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 DD 5E 00 00: call 0x585e7f10
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0fffffffh
        or eax, 20000000h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 6
        ; Exact mapped bytes 75 12: jne 0x585e2079
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ecx + 220e0h]
        ; Exact mapped bytes E8 18 83 EE FF: call 0x584ca390
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3A: jmp 0x585e20b5
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        xor eax, 100h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        or eax, 200h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 00 49 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x49
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 79 A3 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 2F EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2f
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 4ech], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E1 48 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2A 06 FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 A0 FC FF FF: mov word ptr [ebp - 0x360], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 48 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x48
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 28 35 EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x35
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 9E FC FF FF: mov word ptr [ebp - 0x362], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 4f0h], eax
        push 1
        mov ecx, dword ptr [ebp - 4ech]
        push ecx
        movzx edx, word ptr [ebp - 360h]
        push edx
        movzx eax, word ptr [ebp - 362h]
        push eax
        mov ecx, dword ptr [ebp - 4f0h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B B6 F9 FF: call 0x5857d770
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb6
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x585e22a8
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 20f34h], 0
        ; Exact mapped bytes 0F 84 3A 01 00 00: je 0x585e22a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 20f34h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 20f34h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 20f34h]
        cdq
        mov ecx, 19h
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x585e22a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 20f34h], 7dh
        ; Exact mapped bytes 7E 1C: jle 0x585e21d0
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 314h]
        mov eax, dword ptr [eax + 20f34h]
        cdq
        mov ecx, 7dh
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x585e22a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 20f34h]
        cdq
        mov ecx, 19h
        idiv ecx
        mov dword ptr [ebp - 4f4h], eax
        push 588abfb4h
        ; Exact mapped bytes E8 FC FD F3 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4f8h], eax
        mov edx, dword ptr [ebp - 4f4h]
        push edx
        mov eax, dword ptr [ebp - 4f8h]
        push eax
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 20f10h]
        mov dword ptr [ebp - 4fch], eax
        push 0ffff00h
        lea ecx, [ebp - 210h]
        push ecx
        mov ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes E8 8C 32 1E 00: call 0x587c54d0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x32
        __asm _emit 0x1e
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2F 28 EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x28
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 504h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 500h], edx
        mov eax, dword ptr [ebp - 500h]
        push eax
        mov ecx, dword ptr [ebp - 504h]
        ; Exact mapped bytes E8 4B 9B 1D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9b
        __asm _emit 0x1d
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE 27 EA FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x27
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 3fch], eax
        mov ecx, dword ptr [ebp - 3fch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 508h], eax
        push 0
        mov ecx, dword ptr [ebp - 3fch]
        ; Exact mapped bytes FF 95 F8 FA FF FF: call dword ptr [ebp - 0x508]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0f00h
        cmp edx, 400h
        ; Exact mapped bytes 0F 85 DD 00 00 00: jne 0x585e23a3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10678h]
        xor ecx, 400h
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10678h], ecx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10678h]
        or ecx, 800h
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 10678h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 46 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2C A1 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa1
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 95 2D EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2d
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 50ch], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 46 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DD 03 FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 9C FC FF FF: mov word ptr [ebp - 0x364], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 72 46 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x46
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DB 32 EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x32
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 9A FC FF FF: mov word ptr [ebp - 0x366], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 54ch], eax
        push 0
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        movzx edx, word ptr [ebp - 364h]
        push edx
        movzx eax, word ptr [ebp - 366h]
        push eax
        mov ecx, dword ptr [ebp - 54ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 CE B3 F9 FF: call 0x5857d770
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb3
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 12 4C FF FF: call 0x585d6fc0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 A7 71 FF FF: call 0x585d9560
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 1C 6C FF FF: call 0x585d8fe0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 41 D4 FF FF: call 0x585df810
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 06 4B FF FF: call 0x585d6ee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 314h]
        cmp dword ptr [edx + 1068ch], 0
        ; Exact mapped bytes 0F 85 33 03 00 00: jne 0x585e2721
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 C1 45 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 86 CE 02 00 00: jbe 0x585e26d5
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 6E 6E FE FF: call 0x585c9280
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 20de8h]
        sub ecx, 1
        mov dword ptr [ebp - 514h], ecx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 45 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 07 A0 EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xa0
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 70 2C EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6F 45 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B8 02 FF FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 98 FC FF FF: mov word ptr [ebp - 0x368], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D 45 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x45
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 31 EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x31
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 96 FC FF FF: mov word ptr [ebp - 0x36a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, 1
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, byte ptr [ecx + eax + 10de8h]
        mov dword ptr [ebp - 51ch], edx
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 10694h]
        mov dword ptr [ebp - 520h], ecx
        mov edx, dword ptr [ebp - 514h]
        push edx
        mov eax, dword ptr [ebp - 314h]
        add eax, 10de9h
        push eax
        mov ecx, dword ptr [ebp - 518h]
        push ecx
        movzx edx, word ptr [ebp - 368h]
        push edx
        movzx eax, word ptr [ebp - 36ah]
        push eax
        mov ecx, dword ptr [ebp - 51ch]
        push ecx
        mov edx, dword ptr [ebp - 520h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 D1 F9 FF: call 0x5857f6a0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 7A 26 00 00: call 0x585e4b80
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        movzx ecx, word ptr [eax + 107c8h]
        cmp ecx, 8
        ; Exact mapped bytes 74 1E: je 0x585e2537
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 314h]
        movzx eax, word ptr [edx + 107c8h]
        cmp eax, 9
        ; Exact mapped bytes 74 0C: je 0x585e2537
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 BA 11 00 00: call 0x585e36f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 314h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 78 44 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 2
        ; Exact mapped bytes 0F 86 56 01 00 00: jbe 0x585e26a7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 5E 44 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 86 32 01 00 00: jbe 0x585e269d
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        add ecx, 106a4h
        ; Exact mapped bytes E8 44 44 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x44
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 76 0C: jbe 0x585e258d
        __asm _emit 0x76
        __asm _emit 0x0c
        ; Exact mapped bytes C7 05 34 2E 90 58 00 00 00 00: mov dword ptr [0x58902e34], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x585e2597
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 34 2E 90 58 01 00 00 00: mov dword ptr [0x58902e34], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 6E 6E FF FF: call 0x585d9410
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x585e263a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10694h]
        mov dword ptr [ebp - 524h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C3 30 EB FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x30
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 528h], eax
        mov eax, dword ptr [ebp - 524h]
        push eax
        mov ecx, dword ptr [ebp - 528h]
        push ecx
        push 588abfd8h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 10h
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 52ch], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 530h], ecx
        push 0
        lea edx, [ebp - 558h]
        push edx
        mov eax, dword ptr [ebp - 52ch]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        mov edx, dword ptr [ebp - 530h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 6B 03 00 00: call 0x585e29b0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10de4h]
        mov dword ptr [eax + 1068ch], edx
        ; Exact mapped bytes EB 1B: jmp 0x585e267b
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 314h]
        mov ecx, dword ptr [eax + 1068ch]
        sub ecx, 1
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 1068ch], ecx
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 1068ch], 0
        ; Exact mapped bytes 7E 0E: jle 0x585e2698
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 EB 8C FE FF: call 0x585cb380
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C8: jmp 0x585e2660
        __asm _emit 0xeb
        __asm _emit 0xc8
        ; Exact mapped bytes E9 B4 FE FF FF: jmp 0x585e2551
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 05 34 2E 90 58 01 00 00 00: mov dword ptr [0x58902e34], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x2e
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 5E 6D FF FF: call 0x585d9410
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 F3 02 00 00: call 0x585e29b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10de4h]
        mov dword ptr [ecx + 1068ch], eax
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 588h], 0
        ; Exact mapped bytes 74 3D: je 0x585e2721
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0fffffffh
        or eax, 80000000h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 7F 30 00 00: call 0x585e5790
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 588h], 0
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 1068ch], 0
        ; Exact mapped bytes 74 66: je 0x585e2796
        __asm _emit 0x74
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 314h]
        movzx edx, byte ptr [ecx + 10688h]
        push edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 E7 28 FF FF: call 0x585d5030
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 314h]
        mov byte ptr [eax + 10688h], 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10690h]
        shl edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 10690h], edx
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 05 8C FE FF: call 0x585cb380
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 1068ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 1068ch], edx
        ; Exact mapped bytes E9 2D 01 00 00: jmp 0x585e28c8
        __asm _emit 0xe9
        __asm _emit 0x2d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 10678h]
        and edx, 0f0000000h
        cmp edx, 20000000h
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x585e2886
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 41 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 9C EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9c
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 28 EC FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x28
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DD 41 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 26 FF FE FF: call 0x585d2710
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 92 FC FF FF: mov word ptr [ebp - 0x36e], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 41 EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 24 2E EB FF: call 0x58495630
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2e
        __asm _emit 0xeb
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 64h
        div ecx
        ; Exact mapped bytes 66 89 85 94 FC FF FF: mov word ptr [ebp - 0x36c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10694h]
        mov dword ptr [ebp - 538h], eax
        mov ecx, dword ptr [ebp - 534h]
        push ecx
        movzx edx, word ptr [ebp - 36eh]
        push edx
        movzx eax, word ptr [ebp - 36ch]
        push eax
        mov ecx, dword ptr [ebp - 538h]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 AE F9 FF: call 0x5857d720
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xae
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 1E 23 00 00: call 0x585e4b80
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0fffffffh
        or eax, 80000000h
        mov ecx, dword ptr [ebp - 314h]
        mov dword ptr [ecx + 10678h], eax
        ; Exact mapped bytes EB 42: jmp 0x585e28c8
        __asm _emit 0xeb
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 314h]
        mov eax, dword ptr [edx + 10678h]
        and eax, 0f0000000h
        cmp eax, 80000000h
        ; Exact mapped bytes 75 2A: jne 0x585e28c8
        __asm _emit 0x75
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp - 314h]
        cmp dword ptr [ecx + 588h], 0
        ; Exact mapped bytes 74 1B: je 0x585e28c8
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 314h]
        ; Exact mapped bytes E8 D8 2E 00 00: call 0x585e5790
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 314h]
        mov dword ptr [edx + 588h], 0
        mov eax, dword ptr [ebp - 314h]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 1E: je 0x585e28f2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 3ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0D: ja 0x585e28f2
        __asm _emit 0x77
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 314h]
        mov dword ptr [eax + 3ch], 0
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 328h], edx
        cmp dword ptr [ebp - 328h], 0
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x585e298f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 328h]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0C: ja 0x585e2928
        __asm _emit 0x77
        __asm _emit 0x0c
        mov dword ptr [ebp - 328h], 0
        ; Exact mapped bytes EB D9: jmp 0x585e2901
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 DD 2C EB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 314h]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 18: jne 0x585e2958
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 328h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 328h]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 39: jmp 0x585e298f
        __asm _emit 0xeb
        __asm _emit 0x39
        ; Exact mapped bytes EB 32: jmp 0x585e298a
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 328h]
        ; Exact mapped bytes E8 AD 2C EB FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x2c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 53ch], ecx
        mov edx, dword ptr [ebp - 328h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 328h]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 53ch]
        mov dword ptr [ebp - 328h], eax
        ; Exact mapped bytes E9 72 FF FF FF: jmp 0x585e2901
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 AA E6 24 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xe6
        __asm _emit 0x24
        __asm _emit 0x00
        mov esp, ebp
    }
}
