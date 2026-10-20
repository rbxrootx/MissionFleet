// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58692060 .. +0x964 bytes.
extern "C" __declspec(naked) void FUN_58692060_58692060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5869207c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 118h]
        ; Exact mapped bytes 0F 8D 33 09 00 00: jge 0x586929c1
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 148h], 2
        ; Exact mapped bytes 0F 85 19 08 00 00: jne 0x586928bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 13 49 DF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x49
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CC A3 DF FF: call 0x5848c480
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xa3
        __asm _emit 0xdf
        __asm _emit 0xff
        movzx edx, ax
        test edx, edx
        ; Exact mapped bytes 74 58: je 0x58692113
        __asm _emit 0x74
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes 75 45: jne 0x5869210e
        __asm _emit 0x75
        __asm _emit 0x45
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 764h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cdq
        mov ecx, 3ch
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5A 20 E7 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x20
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 B5 08 00 00: jmp 0x586929c1
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x58692113
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 60 FF FF FF: jmp 0x58692073
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 120h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 120h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 B9 EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 120h], 0
        ; Exact mapped bytes 0F 8E 36 05 00 00: jle 0x58692685
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        cmp dword ptr [edx + 58947974h], 0
        ; Exact mapped bytes 74 11: je 0x58692171
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 134h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 134h], 0
        ; Exact mapped bytes 7E 22: jle 0x586921a3
        __asm _emit 0x7e
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 134h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 134h], eax
        ; Exact mapped bytes E9 E8 03 00 00: jmp 0x5869258b
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 120h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 120h], edx
        imul edx, dword ptr [ebp - 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 25ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 134h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 120h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 120h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BA BB EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xbb
        __asm _emit 0xeb
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 244h]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 15ch]
        mov esi, 4
        shl esi, 0
        mov edx, dword ptr [eax + edx]
        sub edx, dword ptr [ecx + esi]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E B9 01 00 00: jle 0x58692414
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5e4h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5e4h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E B8 EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xb8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 604h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 604h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 37 B8 EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb8
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5e4h]
        xor edx, 55h
        add edx, 1
        xor edx, 55h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 5e4h], edx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5e4h]
        xor ecx, 55h
        add ecx, 1
        xor ecx, 55h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 604h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5e4h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 5e4h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AA BA EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xba
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 604h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 604h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 BA EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 15ch]
        mov ecx, dword ptr [eax + edx]
        sub ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 15ch]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 0a0e6b2d0h
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 184h]
        mov dword ptr [eax + ecx], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 184h]
        mov ecx, dword ptr [eax + edx]
        sub ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 0a0e6b2d0h
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 184h]
        mov dword ptr [eax + ecx], edx
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x58692561
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8D 43 01 00 00: jge 0x58692561
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5e4h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 5e4h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B B6 EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb6
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5e4h]
        xor eax, 55h
        sub eax, 1
        xor eax, 55h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 5e4h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5e4h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5e4h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 31 B9 EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb9
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 15ch]
        mov eax, dword ptr [edx + ecx]
        add eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 15ch]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 0a0e6b2d0h
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + eax], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 184h]
        mov eax, dword ptr [edx + ecx]
        add eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 0a0e6b2d0h
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70ch]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 5e4h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 06 8C 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x8c
        __asm _emit 0x12
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 654h]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 654h]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [eax + esi]
        add eax, dword ptr [edx + ecx]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 654h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 654h]
        mov eax, 4
        shl eax, 0
        mov eax, dword ptr [edx + eax]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6c0h]
        ; Exact mapped bytes E8 C3 77 E3 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x77
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 0D D2 E0 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 11ch]
        ; Exact mapped bytes 75 3E: jne 0x58692680
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 764h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cdq
        mov ecx, 3ch
        idiv ecx
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E1 1A E7 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1a
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 E2 01 00 00: jmp 0x58692867
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 15ch]
        mov esi, 4
        imul esi, esi, 0
        mov ecx, dword ptr [ecx + edx]
        mov dword ptr [eax + esi], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 0a0e6b2d0h
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        xor ecx, 0a0e6b2d0h
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 184h]
        mov dword ptr [eax + edx], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov esi, 4
        imul esi, esi, 0
        mov eax, dword ptr [eax + ecx]
        mov dword ptr [edx + esi], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 184h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        imul ecx, eax, 0
        cmp dword ptr [edx + ecx], 0
        ; Exact mapped bytes 74 65: je 0x5869283b
        __asm _emit 0x74
        __asm _emit 0x65
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 698h], 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6c0h]
        mov dword ptr [ebp - 2ch], eax
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DF 36 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 6ach]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 65 26 EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x26
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 148h], 4
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 EA FF FF: call 0x586912f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 2C: jmp 0x58692867
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 148h], 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 67ch]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 2A 37 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 6
        ; Exact mapped bytes 7E 29: jle 0x586928bb
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 72ch]
        mov dword ptr [ebp - 3ch], eax
        push 16h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 22 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x22
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A6 43 DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x43
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 698h], 0
        ; Exact mapped bytes 0F 84 ED 00 00 00: je 0x586929bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 6ach]
        ; Exact mapped bytes E8 EF 21 EA FF: call 0x58534ad0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x21
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 D3 00 00 00: jne 0x586929bc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 698h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 148h], 4
        ; Exact mapped bytes 75 7B: jne 0x58692985
        __asm _emit 0x75
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 67ch]
        mov dword ptr [ebp - 40h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 6C 36 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x36
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        push 57h
        push 54h
        push 0fh
        ; Exact mapped bytes 8B 0D 1C 07 96 58: mov ecx, dword ptr [0x5896071c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A F4 0D 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xf4
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x58692983
        __asm _emit 0x75
        __asm _emit 0x49
        push 1ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 39 21 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x21
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 61 94 12 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x94
        __asm _emit 0x12
        __asm _emit 0x00
        push 1ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 14 21 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x21
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4ch], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        nop
        ; Exact mapped bytes EB 1B: jmp 0x586929a0
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 50h], edx
        push 1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 41 35 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x35
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 654h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        ; Exact mapped bytes E9 B2 F6 FF FF: jmp 0x58692073
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
    }
}
