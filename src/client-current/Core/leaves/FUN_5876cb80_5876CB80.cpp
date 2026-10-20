// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876CB80 .. +0x58F bytes.
extern "C" __declspec(naked) void FUN_5876cb80_5876CB80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push esi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 1ch], 0a8ch
        mov dword ptr [ebp - 40h], 1eh
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876cbb1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 78h
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x5876cc96
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx*4 + 5894c930h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax*4 + 589490f0h]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 30h]
        imul ecx, dword ptr [eax + edx + 14e8h]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 2ch]
        imul esi, dword ptr [eax + edx + 14ech]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx*8 + 1738h], ecx
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 2ch]
        imul eax, dword ptr [edx + ecx + 14e8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 30h]
        imul esi, dword ptr [eax + edx + 14ech]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*8 + 173ch], eax
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x5876cba8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 28h], 1eh
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ccb6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 78h
        ; Exact mapped bytes 0F 8D F7 00 00 00: jge 0x5876cdb7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*4 + 5894c930h]
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx*4 + 589490f0h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ccec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 6
        ; Exact mapped bytes 0F 8D A5 00 00 00: jge 0x5876cd9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 38h]
        imul ecx, dword ptr [eax + edx*8 + 410ch]
        mov eax, ecx
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 34h]
        imul esi, dword ptr [eax + edx*8 + 4110h]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul edx, dword ptr [ebp - 14h], 30h
        mov eax, dword ptr [ebp - 8]
        lea edx, [eax + edx + 47fch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + eax*8], ecx
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 34h]
        imul eax, dword ptr [edx + ecx*8 + 410ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 38h]
        imul esi, dword ptr [eax + edx*8 + 4110h]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, dword ptr [ebp - 14h], 30h
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 47fch]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x5876cce3
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 F6 FE FF FF: jmp 0x5876ccad
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0E: je 0x5876cdd2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, 0e10h
        cdq
        idiv dword ptr [ebp + 8]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x5876cdd9
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 1eh
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 28h], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5876cdf1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 8D 0B 03 00 00: jge 0x5876d108
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx*4 + 5894c930h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*4 + 589490f0h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ce29
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 0F 8D A9 00 00 00: jge 0x5876cedc
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [edx + ecx*8 + 14e8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 20h]
        imul esi, dword ptr [eax + edx*8 + 14ech]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul edx, dword ptr [ebp - 4], 120h
        mov eax, dword ptr [ebp - 8]
        lea edx, [eax + edx + 14f8h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*8], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 20h]
        imul eax, dword ptr [edx + ecx*8 + 14e8h]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 24h]
        imul esi, dword ptr [eax + edx*8 + 14ech]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, dword ptr [ebp - 4], 120h
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 14f8h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x5876ce20
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5876ceee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 6
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x5876cf9b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [edx + ecx*8 + 410ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 20h]
        imul esi, dword ptr [eax + edx*8 + 4110h]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        sub ecx, eax
        imul edx, dword ptr [ebp - 0ch], 30h
        mov eax, dword ptr [ebp - 8]
        lea edx, [eax + edx + 413ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*8], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 20h]
        imul eax, dword ptr [edx + ecx*8 + 410ch]
        cdq
        mov ecx, 3e8h
        idiv ecx
        mov ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 24h]
        imul esi, dword ptr [eax + edx*8 + 4110h]
        mov eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        imul ecx, dword ptr [ebp - 0ch], 30h
        mov edx, dword ptr [ebp - 8]
        lea ecx, [edx + ecx + 413ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*8 + 4], eax
        ; Exact mapped bytes E9 4A FF FF FF: jmp 0x5876cee5
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5876cfad
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D 35 01 00 00: jge 0x5876d0ec
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 24h]
        imul eax, dword ptr [edx + ecx*8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp - 20h]
        imul esi, dword ptr [edx + ecx*8 + 4]
        sub eax, esi
        cdq
        mov ecx, 3e8h
        idiv ecx
        imul edx, dword ptr [ebp - 4], 120h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 1b78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*8], eax
        imul edx, dword ptr [ebp - 4], 120h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 1b78h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*8]
        cdq
        mov ecx, 64h
        idiv ecx
        imul edx, dword ptr [ebp - 4], 120h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 1b78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 20h]
        imul ecx, dword ptr [eax + edx*8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp - 24h]
        imul esi, dword ptr [eax + edx*8 + 4]
        add ecx, esi
        mov eax, ecx
        cdq
        mov ecx, 7d0h
        idiv ecx
        imul edx, dword ptr [ebp - 4], 120h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 1b78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*8 + 4], eax
        imul edx, dword ptr [ebp - 4], 120h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 1b78h]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ecx + edx*8 + 4]
        cdq
        mov ecx, 64h
        idiv ecx
        imul edx, dword ptr [ebp - 4], 120h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + edx + 1b78h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + ecx*8 + 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 34ch
        ; Exact mapped bytes E8 32 79 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x79
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 27ch
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + edx*4 + 100h]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ebp - 48h]
        movzx eax, byte ptr [edx]
        imul eax, eax, 56h
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + edx*4 + 1af8h], eax
        ; Exact mapped bytes E9 B8 FE FF FF: jmp 0x5876cfa4
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 E0 FC FF FF: jmp 0x5876cde8
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
