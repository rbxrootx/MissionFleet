// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588EB8C0 .. +0x407 bytes.
extern "C" __declspec(naked) void FUN_588eb8c0() {
    __asm {
        push -1
        push 58989986h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
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
        lea eax, [esp + 28h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 AE 03 00 00: je 0x588ebca3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        cmp dword ptr [esi + 90h], 1
        ; Exact mapped bytes 0F 85 92 02 00 00: jne 0x588ebb96
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
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
        mov edi, dword ptr [ecx + 104f4h]
        mov eax, 55555556h
        imul edi
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        lea edx, [eax + eax*2]
        sub edi, edx
        ; Exact mapped bytes 0F 85 73 02 00 00: jne 0x588ebb9c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [esi + 98h]
        mov eax, dword ptr [esi + 4]
        lea eax, [eax + eax*4]
        lea edx, [edx + edx*2]
        add eax, edx
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 18h], ebp
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 20h], ebp
        add eax, dword ptr [ecx + 10490h]
        xor edx, edx
        add eax, dword ptr [ecx + 10488h]
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
        mov edx, dword ptr [eax + edx*4]
        and edx, 3
        mov ebx, edx
        ; Exact mapped bytes 39 2D 4C 90 9C 58: cmp dword ptr [0x589c904c], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x588eba30
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 CC 12 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 30h], ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 62: je 0x588eb9f3
        __asm _emit 0x74
        __asm _emit 0x62
        ; Exact mapped bytes 8B 0D 80 46 A2 58: mov ecx, dword ptr [0x58a24680]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x588eb9b6
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588eb9b6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588eb9b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        movzx ecx, word ptr [esi + 96h]
        push ebp
        push ebp
        push 3e8h
        push ecx
        movzx ecx, word ptr [esi + 94h]
        push ecx
        push edx
        push edi
        push 4
        push 12h
        lea edx, [esp + 3ch]
        push edx
        push ebx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 A1 32 E7 FF: call 0x5875ec90
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588eb9f5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push ebp
        push ebp
        mov ecx, edi
        mov dword ptr [esp + 38h], 0ffffffffh
        ; Exact mapped bytes E8 5A 32 E7 FF: call 0x5875ec60
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x32
        __asm _emit 0xe7
        __asm _emit 0xff
        push 0fffffeffh
        mov ecx, edi
        ; Exact mapped bytes E8 0E 73 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        push 80h
        mov ecx, edi
        ; Exact mapped bytes E8 C2 72 01 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        push 3e8h
        mov ecx, edi
        ; Exact mapped bytes E8 66 5B E4 FF: call 0x58731590
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5b
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 2D 50 90 9C 58: cmp dword ptr [0x589c9050], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 B3 00 00 00: je 0x588ebaef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 08 12 09 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x12
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 30h], 1
        cmp eax, ebp
        ; Exact mapped bytes 74 65: je 0x588ebabe
        __asm _emit 0x74
        __asm _emit 0x65
        ; Exact mapped bytes 8B 0D 78 46 A2 58: mov ecx, dword ptr [0x58a24678]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 3
        ; Exact mapped bytes 7E 16: jle 0x588eba7e
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebp
        ; Exact mapped bytes 74 0E: je 0x588eba7e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 0c0h
        ; Exact mapped bytes EB 02: jmp 0x588eba80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 10524h]
        movzx ecx, word ptr [esi + 96h]
        push ebp
        push ebp
        push 3e9h
        push ecx
        movzx ecx, word ptr [esi + 94h]
        push ecx
        push edx
        push edi
        push 4
        push 12h
        lea edx, [esp + 3ch]
        push edx
        lea ecx, [ebx + ebx]
        push ecx
        push ebp
        mov ecx, eax
        ; Exact mapped bytes E8 D6 31 E7 FF: call 0x5875ec90
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x588ebac0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push ebp
        push ebp
        mov ecx, edi
        mov dword ptr [esp + 38h], 0ffffffffh
        ; Exact mapped bytes E8 8F 31 E7 FF: call 0x5875ec60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x31
        __asm _emit 0xe7
        __asm _emit 0xff
        push 102h
        mov ecx, edi
        ; Exact mapped bytes E8 43 72 01 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        push 3e9h
        mov ecx, edi
        ; Exact mapped bytes E8 A7 5A E4 FF: call 0x58731590
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x5a
        __asm _emit 0xe4
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 2D DC 8E 9C 58: cmp dword ptr [0x589c8edc], ebp
        __asm _emit 0x39
        __asm _emit 0x2d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x588ebb7c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 3D 80 45 A2 58: mov edi, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edi + 1ch]
        sub eax, dword ptr [edi + 14h]
        mov ecx, dword ptr [ecx + 10524h]
        mov ebx, dword ptr [ecx + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        movzx ebp, word ptr [esi + 94h]
        sub ebp, eax
        mov eax, dword ptr [edi + 20h]
        sub eax, dword ptr [edi + 18h]
        sub ebp, dword ptr [ecx + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebx
        movzx edx, word ptr [esi + 96h]
        sub eax, edx
        add eax, dword ptr [ecx + 54h]
        ; Exact mapped bytes 8B 0D E0 46 A2 58: mov ecx, dword ptr [0x58a246e0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 170h], 8
        ; Exact mapped bytes 7E 14: jle 0x588ebb6a
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ecx + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x588ebb6a
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ecx + 194h]
        mov ecx, dword ptr [ecx + 20h]
        ; Exact mapped bytes EB 02: jmp 0x588ebb6c
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
        push eax
        push ebp
        ; Exact mapped bytes E8 86 B8 EC FF: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0xec
        __asm _emit 0xff
        xor ebp, ebp
        ; Exact mapped bytes 66 FF 86 98 00 00 00: inc word ptr [esi + 0x98]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [esi + 98h]
        ; Exact mapped bytes 66 83 F8 03: cmp ax, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 76 06: jbe 0x588ebb96
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 8B 0D 9C 45 A2 58: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, 1
        cmp dword ptr [ecx + 10488h], edx
        ; Exact mapped bytes 75 64: jne 0x588ebc0d
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ecx + 10490h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x588ebbbb
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 75 50: jne 0x588ebc0d
        __asm _emit 0x75
        __asm _emit 0x50
        cmp byte ptr [esi + 0a9h], 0
        ; Exact mapped bytes 75 1F: jne 0x588ebbe5
        __asm _emit 0x75
        __asm _emit 0x1f
        add dword ptr [esi + 0a0h], -1
        ; Exact mapped bytes 79 16: jns 0x588ebbe5
        __asm _emit 0x79
        __asm _emit 0x16
        mov byte ptr [esi + 0a9h], dl
        mov dword ptr [esi + 0a0h], 0fh
        mov dword ptr [esi + 0b0h], edx
        mov eax, 2
        cmp byte ptr [esi + 0a9h], al
        ; Exact mapped bytes 75 1B: jne 0x588ebc0d
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [esi + 8ch], edx
        ; Exact mapped bytes 75 03: jne 0x588ebbfd
        __asm _emit 0x75
        __asm _emit 0x03
        add dword ptr [esi + 4], eax
        add dword ptr [esi + 0a0h], -1
        ; Exact mapped bytes 79 07: jns 0x588ebc0d
        __asm _emit 0x79
        __asm _emit 0x07
        mov byte ptr [esi + 0a9h], 3
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [ecx + 0ch]
        cmp edi, ebp
        ; Exact mapped bytes 74 65: je 0x588ebc7f
        __asm _emit 0x74
        __asm _emit 0x65
        mov ebx, 100h
        nop
        mov ecx, edi
        ; Exact mapped bytes E8 B9 AA FE FF: call 0x588d66e0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x588ebcba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [edi + 4]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 76: jl 0x588ebcb7
        __asm _emit 0x7c
        __asm _emit 0x76
        mov edx, dword ptr [esi + 1ch]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 6D: jge 0x588ebcb7
        __asm _emit 0x7d
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        mov ecx, dword ptr [edi + 8]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 5E: jl 0x588ebcb7
        __asm _emit 0x7c
        __asm _emit 0x5e
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 55: jge 0x588ebcb7
        __asm _emit 0x7d
        __asm _emit 0x55
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov dl, byte ptr [edi + 354h]
        cmp dl, byte ptr [ecx + 354h]
        ; Exact mapped bytes 75 42: jne 0x588ebcba
        __asm _emit 0x75
        __asm _emit 0x42
        mov dword ptr [esi + 28h], 96h
        cmp byte ptr [esi + 0a9h], 4
        ; Exact mapped bytes 75 1B: jne 0x588ebca3
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [esi + 0b0h], ebp
        ; Exact mapped bytes 75 13: jne 0x588ebca3
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esp + 28h]
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
        add esp, 20h
        ret
        mov dword ptr [esi + 28h], ebx
        mov edi, dword ptr [edi + 78h]
        cmp edi, ebp
        ; Exact mapped bytes 0F 85 5B FF FF FF: jne 0x588ebc20
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB B8: jmp 0x588ebc7f
        __asm _emit 0xeb
        __asm _emit 0xb8
    }
}
