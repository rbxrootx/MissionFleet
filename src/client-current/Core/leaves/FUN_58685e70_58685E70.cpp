// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58685E70 .. +0x90D bytes.
extern "C" __declspec(naked) void FUN_58685e70_58685E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58685e8c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes 0F 8D DA 08 00 00: jge 0x58686778
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xda
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 138h], 2
        ; Exact mapped bytes 0F 85 CE 07 00 00: jne 0x58686680
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f8h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 0f8h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 07 7C EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 0f8h], 0
        ; Exact mapped bytes 0F 8E 36 05 00 00: jle 0x58686424
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 3
        cmp dword ptr [edx + 58947974h], 0
        ; Exact mapped bytes 74 11: je 0x58685f10
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 118h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 118h], 0
        ; Exact mapped bytes 7E 22: jle 0x58685f42
        __asm _emit 0x7e
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 118h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 118h], eax
        ; Exact mapped bytes E9 E8 03 00 00: jmp 0x5868632a
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0f8h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0f8h], edx
        imul edx, dword ptr [ebp - 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 288h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 118h], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f8h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 0f8h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 1B 7E EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x7e
        __asm _emit 0xec
        __asm _emit 0xff
        imul ecx, dword ptr [ebp - 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 270h]
        sub eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov esi, 4
        shl esi, 0
        mov edx, dword ptr [eax + edx]
        sub edx, dword ptr [ecx + esi]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8E B9 01 00 00: jle 0x586861b3
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 898h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 898h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 7A EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8b8h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 8b8h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 7A EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 898h]
        xor edx, 55h
        add edx, 1
        xor edx, 55h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 898h], edx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 898h]
        xor ecx, 55h
        add ecx, 1
        xor ecx, 55h
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 8b8h], ecx
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 898h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 898h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B 7D EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x7d
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8b8h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 8b8h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E4 7C EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7c
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 158h]
        mov ecx, dword ptr [eax + edx]
        sub ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 158h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea eax, [ecx + eax*8 + 198h]
        mov ecx, dword ptr [eax + edx]
        sub ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x58686300
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 8D 43 01 00 00: jge 0x58686300
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 898h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 898h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC 78 EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x78
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 898h]
        xor eax, 55h
        sub eax, 1
        xor eax, 55h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 898h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 898h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 898h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 92 7B EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x7b
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 158h]
        mov eax, dword ptr [edx + ecx]
        add eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + eax], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea edx, [eax + edx*8 + 198h]
        mov eax, dword ptr [edx + ecx]
        add eax, 1
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + edx], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0a50h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 898h]
        xor edx, 55h
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 67 4E 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4e
        __asm _emit 0x13
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 92ch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 92ch]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [eax + esi]
        add eax, dword ptr [edx + ecx]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 92ch]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9e0h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 92ch]
        mov eax, 4
        shl eax, 0
        mov eax, dword ptr [edx + eax]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 9e0h]
        ; Exact mapped bytes E8 24 3A E4 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3a
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 6E 94 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x94
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 0f4h]
        ; Exact mapped bytes 75 3E: jne 0x5868641f
        __asm _emit 0x75
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ab0h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 92ch]
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
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 42 DD E7 FF: call 0x58504160
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdd
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 08 02 00 00: jmp 0x5868662c
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 92ch]
        mov edx, 4
        shl edx, 0
        mov dword ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 158h]
        mov esi, 4
        imul esi, esi, 0
        mov edx, dword ptr [edx + eax]
        mov dword ptr [ecx + esi], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + eax], edx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov esi, 4
        imul esi, esi, 0
        mov ecx, dword ptr [ecx + edx]
        mov dword ptr [eax + esi], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 198h]
        mov dword ptr [eax + edx], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        imul edx, ecx, 0
        cmp dword ptr [eax + edx], 0
        ; Exact mapped bytes 74 63: je 0x586865f6
        __asm _emit 0x74
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 9a0h], 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 22 F9 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9c0h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A8 E8 EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 138h], 4
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD E6 FF FF: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 36: jmp 0x5868662c
        __asm _emit 0xeb
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 138h], 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF E6 FF FF: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 30h], edx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 65 F9 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf9
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 92ch]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 6
        ; Exact mapped bytes 7E 29: jle 0x58686680
        __asm _emit 0x7e
        __asm _emit 0x29
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a7ch]
        mov dword ptr [ebp - 38h], eax
        push 16h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 E4 DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe4
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E1 05 E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 9a0h], 0
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x58686773
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 9c0h]
        ; Exact mapped bytes E8 2A E4 EA FF: call 0x58534ad0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xe4
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C5 00 00 00: jne 0x58686773
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 9a0h], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 138h], 4
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x58686758
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 978h]
        mov dword ptr [ebp - 3ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A3 F8 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xdf
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F9 E5 FF FF: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 77 B6 0E 00: call 0x58771d80
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb6
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 49: jne 0x58686756
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
        ; Exact mapped bytes E8 66 E3 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 8B 0D 94 20 96 58: mov ecx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8E 56 13 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x56
        __asm _emit 0x13
        __asm _emit 0x00
        push 1ah
        ; Exact mapped bytes 8B 0D 68 20 96 58: mov ecx, dword ptr [0x58962068]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 41 E3 DF FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe3
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 B8: call dword ptr [ebp - 0x48]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb8
        nop
        ; Exact mapped bytes EB 1B: jmp 0x58686773
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 9e0h]
        mov dword ptr [ebp - 4ch], edx
        push 1
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 6E F7 DF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf7
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 0B F7 FF FF: jmp 0x58685e83
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
