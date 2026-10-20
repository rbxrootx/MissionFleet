// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868D380 .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_5868d380_5868D380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 148h]
        and eax, 18h
        ; Exact mapped bytes 0F 85 CA 02 00 00: jne 0x5868d670
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 15ch]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 11ch]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 15ch]
        mov esi, 4
        shl esi, 0
        mov eax, dword ptr [ecx + eax]
        cmp eax, dword ptr [edx + esi]
        ; Exact mapped bytes 0F 84 49 02 00 00: je 0x5868d631
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 148h], 2
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 67 39 00 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 67ch]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 8B DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x8b
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6ach]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 37 7A EA FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7a
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 698h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 11ch]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 15ch]
        mov esi, 4
        imul esi, esi, 0
        mov eax, dword ptr [eax + ecx]
        sub eax, dword ptr [edx + esi]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 68 3E E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + eax*4 + 120h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 43 3E E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 120h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 08 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 0A 3E E0 FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x3e
        __asm _emit 0xe0
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 11ch]
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + ecx*4 + 120h]
        ; Exact mapped bytes 74 14: je 0x5868d532
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 17 EF 19 00: call 0x5882c440
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xef
        __asm _emit 0x19
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 68 44 89 58: call dword ptr [0x58894468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 120h], 0
        ; Exact mapped bytes 0F 8E E5 00 00 00: jle 0x5868d631
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 11ch], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + eax + 25ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 134h], eax
        ; Exact mapped bytes 0F 85 B4 00 00 00: jne 0x5868d631
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 6c0h]
        ; Exact mapped bytes E8 29 C8 E3 FF: call 0x584c9de0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc8
        __asm _emit 0xe3
        __asm _emit 0xff
        imul eax, eax, 3e8h
        mov edx, dword ptr [ebp - 4]
        imul ecx, dword ptr [edx + 11ch], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 25ch]
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 11ch]
        mov esi, dword ptr [ebp - 4]
        imul ecx, dword ptr [esi + edx*4 + 120h]
        cdq
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax + edx], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 10 22 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x22
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5868d64a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 20: jge 0x5868d670
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [eax + ecx]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB D1: jmp 0x5868d641
        __asm _emit 0xeb
        __asm _emit 0xd1
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
