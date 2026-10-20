// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00497175 .. +0xB0B bytes.
extern "C" __declspec(naked) void FUN_00497175_00497175() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e576h
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
        sub esp, 0d8h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0dch], ecx
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 0dch]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 0F 84 FE 05 00 00: je 0x4977b8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        cmp dword ptr [ecx + 54h], 0
        ; Exact mapped bytes 75 07: jne 0x4971cd
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A2 0A 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 1
        ; Exact mapped bytes EB 09: jmp 0x4971df
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ebp - 24h]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 0F 8F AD 05 00 00: jg 0x49779e
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        sub edx, 1
        imul edx, edx, 28h
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 14h]
        mov ecx, dword ptr [ecx + edx + 24h]
        ; Exact mapped bytes E8 82 BA 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 80 05 00 00: je 0x497799
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        sub eax, 1
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 78 BA 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xba
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        cmp dword ptr [ecx + 0a4h], 0
        ; Exact mapped bytes 0F 84 3E 05 00 00: je 0x49778b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [edx + 0a4h], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 33: jne 0x49729c
        __asm _emit 0x75
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0dch]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 14: je 0x497289
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a98h
        push 5ca8a4h
        ; Exact mapped bytes E8 7C D7 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x497289
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x497269
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 44h], 1
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0a8h
        push ecx
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 98 5B 00 00: call 0x49ce46
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 83 32 00 00: call 0x49a540
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 30h
        mov edx, dword ptr [eax + 10h]
        mov eax, dword ptr [edx + ecx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 06 30 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 1
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 CB 32 00 00: call 0x49a5c0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 E5 2F 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 30h
        mov edx, dword ptr [eax + 10h]
        mov eax, dword ptr [edx + ecx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 54h]
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 30h
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes 66 8B 54 01 14: mov dx, word ptr [ecx + eax + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x14
        push edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 30h
        mov eax, dword ptr [ecx + 10h]
        mov ecx, dword ptr [eax + edx + 8]
        push ecx
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 36 33 00 00: call 0x49a690
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 08 37 00 00: call 0x49aa70
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 EF 33 00 00: call 0x49a760
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 29 2F 00 00: call 0x49a2b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4973a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aa7h
        push 5ca8a4h
        ; Exact mapped bytes E8 61 D6 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd6
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4973a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C7: jne 0x497371
        __asm _emit 0x75
        __asm _emit 0xc7
        mov ecx, dword ptr [ebp - 2ch]
        and ecx, 0ffffh
        mov dword ptr [ebp - 0e0h], ecx
        mov edx, dword ptr [ebp - 0e0h]
        sub edx, 2
        mov dword ptr [ebp - 0e0h], edx
        cmp dword ptr [ebp - 0e0h], 85h
        ; Exact mapped bytes 0F 87 36 03 00 00: ja 0x49770e
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0e0h]
        xor eax, eax
        mov al, byte ptr [ecx + 497cc0h]
        ; Exact mapped bytes FF 24 85 80 7C 49 00: jmp dword ptr [eax*4 + 0x497c80]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x7c
        __asm _emit 0x49
        __asm _emit 0x00
        push 0
        push 2
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 7E 5E 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 A1 3A 00 00: call 0x49aeb0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 3
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 57 5E 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 BA 3A 00 00: call 0x49aef0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 4
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 30 5E 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 D3 3A 00 00: call 0x49af30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C6 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 5
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 09 5E 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 EC 3A 00 00: call 0x49af70
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 9F 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 6
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 E2 5D 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 49 2E 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 68h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 64h]
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes E9 71 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 7
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 B4 5D 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 97 3A 00 00: call 0x49af70
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4A 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 8D 5D 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 30h
        mov eax, dword ptr [ecx + 10h]
        mov ecx, dword ptr [eax + edx + 10h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 D9 2D 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E3 A1 01 00: call 0x4b1700
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 03 02 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0bh
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 46 5D 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 69 39 00 00: call 0x49aeb0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DC 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0eh
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 1F 5D 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 70h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 42 3A 00 00: call 0x49afb0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B5 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 11h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 F8 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 5B 3A 00 00: call 0x49aff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 8E 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 10h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 D1 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [ebp - 68h]
        mov byte ptr [ebp - 0d8h], dl
        lea eax, [ebp - 0d8h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 68 3A 00 00: call 0x49b030
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 5B 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 12h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 9E 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 81 3A 00 00: call 0x49b070
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 13h
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 77 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 9A 3A 00 00: call 0x49b0b0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0D 01 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 8
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 50 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 54h]
        mov edx, dword ptr [ebp - 24h]
        imul edx, edx, 30h
        mov eax, dword ptr [ecx + 10h]
        mov ecx, dword ptr [eax + edx + 10h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 9C 2C 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push -1
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 E0 23 5E 00: call dword ptr [0x5e23e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E9 BE 00 00 00: jmp 0x497728
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 7
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 01 5C 00 00: call 0x49d277
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea edx, [ebp - 90h]
        push edx
        ; Exact mapped bytes E8 EA 1C 01 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 80h]
        push eax
        mov ecx, dword ptr [ebp - 64h]
        push ecx
        mov edx, dword ptr [ebp - 68h]
        push edx
        ; Exact mapped bytes FF 15 7C 24 5E 00: call dword ptr [0x5e247c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 45 80: mov ax, word ptr [ebp - 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 66 89 85 70 FF FF FF: mov word ptr [ebp - 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 82: mov cx, word ptr [ebp - 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x82
        ; Exact mapped bytes 66 89 8D 72 FF FF FF: mov word ptr [ebp - 0x8e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 86: mov dx, word ptr [ebp - 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x86
        ; Exact mapped bytes 66 89 95 74 FF FF FF: mov word ptr [ebp - 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 45 88: mov ax, word ptr [ebp - 0x78]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x88
        ; Exact mapped bytes 66 89 85 76 FF FF FF: mov word ptr [ebp - 0x8a], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 8A: mov cx, word ptr [ebp - 0x76]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x8a
        ; Exact mapped bytes 66 89 8D 78 FF FF FF: mov word ptr [ebp - 0x88], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 55 8C: mov dx, word ptr [ebp - 0x74]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x8c
        ; Exact mapped bytes 66 89 95 7A FF FF FF: mov word ptr [ebp - 0x86], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 72h]
        and eax, 0ffffh
        cdq
        mov ecx, 0f4240h
        idiv ecx
        mov dword ptr [ebp - 84h], eax
        lea edx, [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 E4 39 00 00: call 0x49b0f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x497728
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        and eax, 0ffffh
        push eax
        push 5cab50h
        ; Exact mapped bytes E8 F0 84 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea ecx, [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [edx + 50h]
        ; Exact mapped bytes E8 66 20 00 00: call 0x4997a0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 B8 2C 00 00: call 0x49a400
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 54h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 40 20 00 00: call 0x4997a0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 30h]
        add ecx, 0a8h
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 60h]
        ; Exact mapped bytes E8 04 2E 00 00: call 0x49a580
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 1F 4E 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x4e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes E9 76 FA FF FF: jmp 0x49720f
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 38 FA FF FF: jmp 0x4971d6
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 0D: jle 0x4977b1
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0dch]
        mov dword ptr [eax + 44h], 0
        xor eax, eax
        ; Exact mapped bytes E9 B7 04 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0dch]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 36: jne 0x4977fa
        __asm _emit 0x75
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 0dch]
        add edx, 0ch
        push edx
        push 58e550h
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 07: jge 0x4977fa
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 75 04 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x49780c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 0F 8D 86 02 00 00: jge 0x497aa4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 14h]
        mov ecx, dword ptr [edx + eax + 24h]
        ; Exact mapped bytes E8 58 B4 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 94h], eax
        cmp dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 0F 84 56 02 00 00: je 0x497a9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x56
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, ecx, 28h
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 14h]
        mov ecx, dword ptr [eax + ecx + 24h]
        ; Exact mapped bytes E8 48 B4 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xb4
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 98h], ecx
        mov edx, dword ptr [ebp - 98h]
        cmp dword ptr [edx + 0a4h], 0
        ; Exact mapped bytes 0F 84 0E 02 00 00: je 0x497a91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 98h]
        mov dword ptr [eax + 0a4h], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x49793d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 0c8h]
        push edx
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x4978d6
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 99 03 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0c8h], 1
        ; Exact mapped bytes 75 2B: jne 0x49790a
        __asm _emit 0x75
        __asm _emit 0x2b
        push 1
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x49790a
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 65 03 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 14: je 0x49792a
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b2dh
        push 5ca8a4h
        ; Exact mapped bytes E8 DB D0 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd0
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49792a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x49790a
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 44h], 1
        mov dword ptr [ebp - 0c4h], 10h
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 41 4C 0B 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 2
        mov eax, dword ptr [ebp - 98h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 A8 00 00 00: mov cx, word ptr [eax + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], ecx
        cmp dword ptr [ebp - 0e4h], 0ah
        ; Exact mapped bytes 77 5A: ja 0x4979d1
        __asm _emit 0x77
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 0e4h]
        xor edx, edx
        mov dl, byte ptr [eax + 497d52h]
        ; Exact mapped bytes FF 24 95 46 7D 49 00: jmp dword ptr [edx*4 + 0x497d46]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x46
        __asm _emit 0x7d
        __asm _emit 0x49
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 0ffffffffh
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 0a8h
        push ecx
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 54 5C 00 00: call 0x49d602
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 39: jmp 0x4979e9
        __asm _emit 0xeb
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 98h]
        mov eax, dword ptr [edx + 0b0h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x4979d1
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0c4h], 0ffffffffh
        ; Exact mapped bytes EB 18: jmp 0x4979e9
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 98h]
        add edx, 0a8h
        push edx
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 19 5C 00 00: call 0x49d602
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x5c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0c0h], 0
        mov dword ptr [ebp - 0bch], 1
        mov eax, dword ptr [ebp - 1ch]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 3ch]
        mov eax, dword ptr [edx + eax + 2ch]
        mov dword ptr [ebp - 0b8h], eax
        mov dword ptr [ebp - 0b4h], 0
        mov ecx, dword ptr [ebp - 0c4h]
        mov dword ptr [ebp - 0b0h], ecx
        lea edx, [ebp - 0a8h]
        mov dword ptr [ebp - 0ach], edx
        lea eax, [ebp - 0c0h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        imul ecx, ecx, 30h
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 3ch]
        add eax, ecx
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0dch]
        mov ecx, dword ptr [eax + 0ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 98h]
        add ecx, 0a8h
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 19 4B 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x4b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes E9 9D FD FF FF: jmp 0x49783c
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 5F FD FF FF: jmp 0x497803
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0dch]
        add ecx, 18h
        ; Exact mapped bytes E8 DC B1 09 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x497bfd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        add ecx, 18h
        ; Exact mapped bytes E8 DF B1 09 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb1
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0d0h], ecx
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 02: jne 0x497ae9
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CC: jmp 0x497ab5
        __asm _emit 0xeb
        __asm _emit 0xcc
        lea ecx, [ebp - 0cch]
        push ecx
        push 58e918h
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 0d0h]
        mov eax, dword ptr [edx]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 8C E0 00 00 00: jl 0x497bf8
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0d0h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 0cch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0cch]
        push edx
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x497be6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x497be6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0d4h]
        push ecx
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x497b7f
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 F0 00 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0d4h], 1
        ; Exact mapped bytes 75 2B: jne 0x497bb3
        __asm _emit 0x75
        __asm _emit 0x2b
        push 1
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 08: jge 0x497bb3
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x497c6f
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0dch]
        cmp dword ptr [edx + 44h], 0
        ; Exact mapped bytes 74 14: je 0x497bd3
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b6eh
        push 5ca8a4h
        ; Exact mapped bytes E8 32 CE 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xce
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x497bd3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x497bb3
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 0dch]
        mov dword ptr [ecx + 44h], 1
        mov edx, dword ptr [ebp - 0cch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0cch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x497ab5
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 6A: jle 0x497c6d
        __asm _emit 0x7e
        __asm _emit 0x6a
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0dch]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0dch]
        mov dword ptr [edx + 44h], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 7D 36: jge 0x497c6d
        __asm _emit 0x7d
        __asm _emit 0x36
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x497c51
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7dh
        push 5ca8a4h
        ; Exact mapped bytes E8 B4 CD 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x497c51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x497c37
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0dch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0dch]
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 02: jmp 0x497c6f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
