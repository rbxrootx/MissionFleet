// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58565340 .. +0xAF0 bytes.
extern "C" __declspec(naked) void FUN_58565340_58565340() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588837c5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 94h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 94h]
        shr ecx, 0fh
        and ecx, 0fffh
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 5
        and eax, 3ffh
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, word ptr [ecx + 234h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 4D EF FF FF: call 0x58564310
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585653d6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 88 24 02 00 00: mov cx, word ptr [eax + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx edx, cx
        cmp dword ptr [ebp - 2ch], edx
        ; Exact mapped bytes 0F 83 05 09 00 00: jae 0x58565cf5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 1
        cmp dword ptr [eax + 58947974h], 0
        ; Exact mapped bytes 74 0C: je 0x5856540c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x58565497
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        movzx edx, word ptr [ecx + 22ch]
        sub edx, 0c8h
        ; Exact mapped bytes 79 09: jns 0x58565427
        __asm _emit 0x79
        __asm _emit 0x09
        mov dword ptr [ebp - 54h], 0
        ; Exact mapped bytes EB 13: jmp 0x5856543a
        __asm _emit 0xeb
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 24h]
        movzx ecx, word ptr [eax + 22ch]
        sub ecx, 0c8h
        mov dword ptr [ebp - 54h], ecx
        mov edx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 0cch], edx
        mov eax, dword ptr [ebp - 34h]
        cdq
        mov ecx, 32h
        idiv ecx
        mov ecx, eax
        mov eax, dword ptr [ebp - 0cch]
        cdq
        mov esi, 14h
        idiv esi
        lea edx, [ecx + eax + 40h]
        mov dword ptr [ebp - 58h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 58h]
        imul ecx, dword ptr [eax + 70h]
        mov eax, ecx
        cdq
        mov ecx, 1e0h
        idiv ecx
        mov edx, dword ptr [ebp - 58h]
        sub edx, eax
        mov dword ptr [ebp - 28h], edx
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 7F 07: jg 0x5856548e
        __asm _emit 0x7f
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov eax, dword ptr [ebp - 28h]
        add eax, 8
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x58565626
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA 6E F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        shl ecx, 5
        add eax, ecx
        mov edx, dword ptr [ebp - 24h]
        add eax, dword ptr [edx + 138h]
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 DE 67 F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 3e8h
        sub eax, dword ptr [edx*4 + 589558f8h]
        imul eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        add esi, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 38h], esi
        ; Exact mapped bytes 79 0E: jns 0x5856550b
        __asm _emit 0x79
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 38h]
        add edx, 0e10h
        mov dword ptr [ebp - 5ch], edx
        ; Exact mapped bytes EB 0E: jmp 0x58565519
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 38h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 5ch], edx
        mov edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 28h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C 6E F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x6e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        shl ecx, 5
        lea edx, [eax + ecx*2]
        mov eax, dword ptr [ebp - 24h]
        add edx, dword ptr [eax + 138h]
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 5F 67 F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 3e8h
        sub eax, dword ptr [edx*4 + 589558f8h]
        imul eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov eax, esi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        add eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes 79 0E: jns 0x58565595
        __asm _emit 0x79
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 34h]
        add edx, 0e10h
        mov dword ptr [ebp - 60h], edx
        ; Exact mapped bytes EB 0E: jmp 0x585655a3
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 34h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 60h], edx
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 28h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 6D F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        shl ecx, 5
        lea edx, [eax + ecx*4]
        mov eax, dword ptr [ebp - 24h]
        add edx, dword ptr [eax + 138h]
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 D5 66 F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov eax, 3e8h
        sub eax, dword ptr [edx*4 + 589558f8h]
        imul eax, dword ptr [ebp - 28h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        sub esi, eax
        mov eax, esi
        cdq
        mov ecx, 3
        idiv ecx
        mov dword ptr [ebp - 100h], eax
        mov eax, dword ptr [ebp - 48h]
        imul eax, dword ptr [ebp - 100h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        add eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 25ch], 1
        ; Exact mapped bytes 75 2E: jne 0x58565660
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov eax, dword ptr [ebp - 24h]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 2ch]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 8]
        sub ecx, edx
        mov dword ptr [ebp - 40h], ecx
        ; Exact mapped bytes EB 6B: jmp 0x585656cb
        __asm _emit 0xeb
        __asm _emit 0x6b
        imul edx, dword ptr [ebp - 2ch], 900h
        mov eax, dword ptr [ebp - 24h]
        lea ecx, [eax + edx + 3e4h]
        mov edx, dword ptr [ebp - 24h]
        imul eax, dword ptr [edx + 0a4h], 120h
        add ecx, eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 0a0h]
        mov edx, dword ptr [ebp - 24h]
        mov edx, dword ptr [edx + 4]
        add edx, dword ptr [ecx + eax*8]
        mov dword ptr [ebp - 44h], edx
        imul eax, dword ptr [ebp - 2ch], 900h
        mov ecx, dword ptr [ebp - 24h]
        lea edx, [ecx + eax + 3e4h]
        mov eax, dword ptr [ebp - 24h]
        imul ecx, dword ptr [eax + 0a4h], 120h
        add edx, ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 0a0h]
        mov eax, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax + 8]
        sub eax, dword ptr [edx + ecx*8 + 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 6D FA FF FF: call 0x58565150
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 25ch], 1
        ; Exact mapped bytes 75 31: jne 0x58565727
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F 6C F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x6c
        __asm _emit 0xf2
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 2ch], 3
        add eax, ecx
        mov edx, dword ptr [ebp - 24h]
        imul ecx, dword ptr [edx + 4], 5
        add eax, ecx
        push eax
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 95 65 F2 FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x65
        __asm _emit 0xf2
        __asm _emit 0xff
        xor edx, edx
        mov ecx, 8
        div ecx
        mov dword ptr [ebp - 3ch], edx
        push 26ch
        ; Exact mapped bytes E8 D3 B8 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xb8
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 64h], 0
        ; Exact mapped bytes 74 72: je 0x585657b6
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 91 12 F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x12
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 9ch], eax
        mov edx, dword ptr [ebp - 24h]
        movzx eax, word ptr [edx + 24ch]
        mov dword ptr [ebp - 0a0h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 0a4h], edx
        push 40h
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 9ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 0a0h]
        push edx
        push 1
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 0a4h]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes E8 8F 39 1E 00: call 0x58749140
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x1e
        __asm _emit 0x00
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x585657bd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ebp - 0a8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0a8h]
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0F 01 F3 FF: call 0x584958f0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 31: jne 0x58565816
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 40 01 F3 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0xf3
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 75 21: jne 0x58565816
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 10 00 F3 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov ecx, dword ptr [ebp - 0ach]
        ; Exact mapped bytes E8 AB DB F2 FF: call 0x584933c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xdb
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 3dch], 0
        ; Exact mapped bytes 74 21: je 0x58565843
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 17ch]
        push ecx
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 3dch]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 7E 94 1E 00: call 0x5874ecc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x94
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        push 3e8h
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 30 06 F2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 70h]
        mov dword ptr [ebp - 0b0h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 94h]
        shr edx, 1bh
        and edx, 3
        ; Exact mapped bytes 74 0D: je 0x5856587a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 24h]
        add eax, 324h
        mov dword ptr [ebp - 6ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x58565886
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 270h
        mov dword ptr [ebp - 6ch], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 94h]
        shr eax, 1bh
        and eax, 3
        ; Exact mapped bytes 74 0E: je 0x585658a5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 320h]
        mov dword ptr [ebp - 70h], edx
        ; Exact mapped bytes EB 0C: jmp 0x585658b1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 26ch]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0b4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 6A F2 FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6a
        __asm _emit 0xf2
        __asm _emit 0xff
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 0b8h], eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 70h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 0b4h]
        push edx
        mov eax, dword ptr [ebp - 0b8h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 F1 8C 1E 00: call 0x5874e5f0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8c
        __asm _emit 0x1e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D CC 35 90 58 00: cmp dword ptr [0x589035cc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E0 01 00 00: je 0x58565aed
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 25ch], 1
        ; Exact mapped bytes 0F 85 CA 00 00 00: jne 0x585659e7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 DD B6 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 72: je 0x585659ac
        __asm _emit 0x74
        __asm _emit 0x72
        push 0
        ; Exact mapped bytes 8B 0D 50 07 96 58: mov ecx, dword ptr [0x58960750]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 89 F1 F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf1
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0bch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 10 F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0c0h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 25ch]
        mov dword ptr [ebp - 0c4h], eax
        push 0
        push 0
        push 3e8h
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 0bch]
        push eax
        mov ecx, dword ptr [ebp - 0c0h]
        push ecx
        push 1
        push 1
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 0c4h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 09 7A F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        ; Exact mapped bytes EB 07: jmp 0x585659b3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 78h], 0
        mov edx, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 0c8h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 0c8h]
        mov dword ptr [ebp - 30h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 28 7C F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x7c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 68h], 2
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x58565ac5
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 13 B6 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xb6
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 4], 2
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 7A: je 0x58565a7e
        __asm _emit 0x74
        __asm _emit 0x7a
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 254h]
        push eax
        ; Exact mapped bytes 8B 0D 4C 07 96 58: mov ecx, dword ptr [0x5896074c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B7 F0 F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0e8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 0F F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0d0h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 0d4h], edx
        push 0
        push 0
        push 3e8h
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 0e8h]
        push edx
        mov eax, dword ptr [ebp - 0d0h]
        push eax
        push 4
        push 12h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 0d4h]
        push eax
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 37 79 F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x58565a85
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 0d8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 0d8h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax + 0a4h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 0a0h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 3C 7B F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x7b
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 DE FA 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xfa
        __asm _emit 0x24
        __asm _emit 0x00
        push 80h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 61 FA 24 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfa
        __asm _emit 0x24
        __asm _emit 0x00
        push 3e8h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 94 03 F2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D D0 35 90 58 00: cmp dword ptr [0x589035d0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F6 01 00 00: je 0x58565cf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 25ch], 1
        ; Exact mapped bytes 0F 85 D5 00 00 00: jne 0x58565bdf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 F0 B4 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 84h], eax
        mov dword ptr [ebp - 4], 3
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 7A: je 0x58565ba7
        __asm _emit 0x74
        __asm _emit 0x7a
        push 0
        ; Exact mapped bytes 8B 0D 48 07 96 58: mov ecx, dword ptr [0x58960748]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 EF F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0dch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 0E F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0e
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0e0h], eax
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 25ch]
        mov dword ptr [ebp - 0e4h], ecx
        push 0
        push 0
        push 3e9h
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        push eax
        mov ecx, dword ptr [ebp - 0dch]
        push ecx
        mov edx, dword ptr [ebp - 0e0h]
        push edx
        push 1
        push 1
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        shl ecx, 1
        push ecx
        mov edx, dword ptr [ebp - 0e4h]
        push edx
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 11 78 F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x78
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58565bb1
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 104h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 104h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 27 7A F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x58565cd5
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 94h
        ; Exact mapped bytes E8 1B B4 2C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb4
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8ch], eax
        mov dword ptr [ebp - 4], 4
        cmp dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x58565c88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 254h]
        push eax
        ; Exact mapped bytes 8B 0D 44 07 96 58: mov ecx, dword ptr [0x58960744]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 EE F1 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 0ech], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B4 0D F2 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x0d
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 0f0h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 25ch]
        mov dword ptr [ebp - 0f4h], edx
        push 0
        push 0
        push 3e9h
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 0ech]
        push edx
        mov eax, dword ptr [ebp - 0f0h]
        push eax
        push 4
        push 12h
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        shl edx, 1
        push edx
        mov eax, dword ptr [ebp - 0f4h]
        push eax
        mov ecx, dword ptr [ebp - 8ch]
        ; Exact mapped bytes E8 30 77 F6 FF: call 0x584cd3b0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x77
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 90h], eax
        ; Exact mapped bytes EB 0A: jmp 0x58565c92
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 90h], 0
        mov ecx, dword ptr [ebp - 90h]
        mov dword ptr [ebp - 0f8h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 24h]
        mov eax, dword ptr [eax + 0a4h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 0a0h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 2C 79 F6 FF: call 0x584cd600
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x79
        __asm _emit 0xf6
        __asm _emit 0xff
        nop
        push 102h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 CE F8 24 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf8
        __asm _emit 0x24
        __asm _emit 0x00
        push 3e9h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 91 01 F2 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 D8 F6 FF FF: jmp 0x585653cd
        __asm _emit 0xe9
        __asm _emit 0xd8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 0F 84 FE 00 00 00: je 0x58565e03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 8D FD F2 FF: call 0x58495aa0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xfd
        __asm _emit 0xf2
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 E7 00 00 00: jne 0x58565e03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 66 0A 00 00: call 0x58566790
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x58565e03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 F9 F2 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf9
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        sub eax, dword ptr [edx + 243e4h]
        mov dword ptr [ebp - 98h], eax
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4F 14 F7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx eax, word ptr [eax + 84h]
        cmp eax, 0dh
        ; Exact mapped bytes 74 17: je 0x58565d84
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 14 F7 FF: call 0x584d71b0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x14
        __asm _emit 0xf7
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 84h]
        cmp ecx, 10h
        ; Exact mapped bytes 75 0F: jne 0x58565d93
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 243e8h]
        mov dword ptr [ebp - 94h], eax
        mov ecx, dword ptr [ebp - 98h]
        cmp ecx, dword ptr [ebp - 94h]
        ; Exact mapped bytes 73 4E: jae 0x58565def
        __asm _emit 0x73
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 243e8h], 0
        ; Exact mapped bytes 76 42: jbe 0x58565def
        __asm _emit 0x76
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 243e4h], 0
        ; Exact mapped bytes 76 36: jbe 0x58565def
        __asm _emit 0x76
        __asm _emit 0x36
        imul eax, dword ptr [ebp - 98h], 64h
        mov ecx, dword ptr [ebp - 24h]
        xor edx, edx
        div dword ptr [ecx + 243e8h]
        ; Exact mapped bytes 66 89 45 B0: mov word ptr [ebp - 0x50], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xb0
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 0fch], eax
        movzx ecx, word ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 0fch]
        ; Exact mapped bytes E8 22 33 20 00: call 0x58769110
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x33
        __asm _emit 0x20
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 F8 F2 FF: call 0x58495670
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 243e4h], eax
        mov eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 66 8B 88 24 02 00 00: mov cx, word ptr [eax + 0x224]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 07: and cx, 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x07
        movzx eax, cx
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 26 B2 2C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb2
        __asm _emit 0x2c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
