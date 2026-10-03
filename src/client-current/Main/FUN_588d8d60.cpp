// Complete Ghidra body ranges for the selected function.
// 3 discontiguous segments; total 3789 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D8D60 .. +0x45D bytes.
extern "C" __declspec(naked) void FUN_588d8d60_segment_00() {
    __asm {
        sub esp, 24h
        push ebx
        push ebp
        push esi
        push edi
        mov esi, 0a8ch
        lea edi, [ecx + 18e0h]
        mov dword ptr [esp + 18h], 14h
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi - 4], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov dword ptr [esp + 10h], ebp
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1694h]
        imul eax, eax, 0e10h
        add esi, eax
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi + 4], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        mov dword ptr [esp + 10h], ebp
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi + 8], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        mov edx, dword ptr [ecx + 1694h]
        add esi, eax
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi + 0ch], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov dword ptr [esp + 10h], ebp
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi + 10h], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add esi, eax
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov dword ptr [esp + 10h], ebp
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi + 18h], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1694h]
        imul eax, eax, 0e10h
        add esi, eax
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi + 1ch], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        mov dword ptr [esp + 10h], ebp
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi + 20h], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        mov edx, dword ptr [ecx + 1694h]
        add esi, eax
        mov ebx, dword ptr [esi*4 + 58a0ed18h]
        imul edx, ebx
        mov ebp, dword ptr [esi*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebp
        mov dword ptr [esp + 24h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 24h]
        sub edx, eax
        mov dword ptr [edi + 24h], edx
        mov edx, dword ptr [ecx + 1694h]
        imul edx, ebp
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov dword ptr [esp + 10h], ebp
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [edi + 28h], eax
        add esi, 1eh
        mov eax, 6e5d4c3bh
        imul esi
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add esi, eax
        add edi, 30h
        sub dword ptr [esp + 18h], 1
        ; Exact mapped bytes 0F 85 D9 FB FF FF: jne 0x588d8d80
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        mov dword ptr [esp + 10h], ebx
        lea esi, [ecx + 49a4h]
        mov dword ptr [esp + 18h], 78h
        ; Exact mapped bytes EB 03: jmp 0x588d91c0
        __asm _emit 0xeb
        __asm _emit 0x03
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D91C0 .. +0x372 bytes.
extern "C" __declspec(naked) void FUN_588d8d60_segment_01() {
    __asm {
        mov edi, dword ptr [ebx*4 + 58a0ed18h]
        mov edx, dword ptr [ecx + 42b0h]
        imul edx, edi
        mov ebx, dword ptr [ebx*4 + 58a0b4d8h]
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42b4h]
        mov ebp, eax
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [esi - 4], ebp
        mov edx, dword ptr [ecx + 42b0h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42b4h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi], eax
        mov edx, dword ptr [ecx + 42bch]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42b8h]
        imul edx, edi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [esi + 4], eax
        mov edx, dword ptr [ecx + 42bch]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42b8h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 8], eax
        mov edx, dword ptr [ecx + 42c4h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42c0h]
        mov ebp, eax
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [esi + 0ch], eax
        mov edx, dword ptr [ecx + 42c4h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42c0h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ecx + 42c8h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42cch]
        imul edx, ebx
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [esi + 14h], ebp
        mov edx, dword ptr [ecx + 42c8h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42cch]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 18h], eax
        mov edx, dword ptr [ecx + 42d4h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42d0h]
        mov ebp, eax
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [esi + 1ch], eax
        mov edx, dword ptr [ecx + 42d4h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42d0h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 20h], eax
        mov edx, dword ptr [ecx + 42d8h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42dch]
        imul edx, ebx
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [esi + 24h], ebp
        mov edx, dword ptr [ecx + 42d8h]
        imul edx, ebx
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebx, edx
        shr ebx, 1fh
        add ebx, edx
        mov edx, dword ptr [ecx + 42dch]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebx, edx
        add eax, ebx
        mov ebx, dword ptr [esp + 10h]
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi + 28h], eax
        add ebx, 1eh
        mov eax, 6e5d4c3bh
        imul ebx
        sub edx, ebx
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add ebx, eax
        add esi, 30h
        sub dword ptr [esp + 18h], 1
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 85 E9 FC FF FF: jne 0x588d91c0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 38h]
        xor edi, edi
        mov dword ptr [esp + 10h], edi
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x588d94f3
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, 0e10h
        cdq
        idiv esi
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes EB 08: jmp 0x588d94fb
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 20h], 1eh
        test esi, esi
        ; Exact mapped bytes 0F 8E 31 07 00 00: jle 0x588d9c34
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x31
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 3ch]
        lea edx, [eax + 104h]
        add eax, 8
        mov dword ptr [esp + 2ch], eax
        lea eax, [ecx + 16a0h]
        lea ebx, [ecx + 42e4h]
        mov dword ptr [esp + 28h], edx
        mov dword ptr [esp + 38h], eax
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 24h], esi
        ; Exact mapped bytes EB 16: jmp 0x588d9548
        __asm _emit 0xeb
        __asm _emit 0x16
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D9540 .. +0x6FE bytes.
extern "C" __declspec(naked) void FUN_588d8d60_segment_02() {
    __asm {
        mov edi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 18h]
        mov esi, dword ptr [edi*4 + 58a0ed18h]
        mov edi, dword ptr [edi*4 + 58a0b4d8h]
        mov edx, dword ptr [ecx + 1690h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 168ch]
        imul edx, esi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [edx - 4], eax
        mov edx, dword ptr [ecx + 1690h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 168ch]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 38h]
        sar eax, 1
        mov dword ptr [edx], eax
        mov edx, dword ptr [ecx + 1694h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, edi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 38h]
        sub ebp, eax
        mov dword ptr [edx + 11ch], ebp
        mov edx, dword ptr [ecx + 1694h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 1698h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [esp + 38h]
        mov dword ptr [edx + 120h], eax
        mov edx, dword ptr [ecx + 42b0h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42b4h]
        imul edx, edi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [ebx - 4], ebp
        mov edx, dword ptr [ecx + 42b0h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42b4h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx], eax
        mov edx, dword ptr [ecx + 42bch]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42b8h]
        imul edx, esi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [ebx + 4], eax
        mov edx, dword ptr [ecx + 42bch]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42b8h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx + 8], eax
        mov edx, dword ptr [ecx + 42c4h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42c0h]
        imul edx, esi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [ebx + 0ch], eax
        mov edx, dword ptr [ecx + 42c4h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42c0h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx + 10h], eax
        mov edx, dword ptr [ecx + 42c8h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42cch]
        imul edx, edi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [ebx + 14h], ebp
        mov edx, dword ptr [ecx + 42c8h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42cch]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx + 18h], eax
        mov edx, dword ptr [ecx + 42d4h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42d0h]
        imul edx, esi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub eax, ebp
        mov dword ptr [ebx + 1ch], eax
        mov edx, dword ptr [ecx + 42d4h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42d0h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        add ebp, edx
        mov eax, edx
        shr eax, 1fh
        add eax, ebp
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx + 20h], eax
        mov edx, dword ptr [ecx + 42d8h]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [ecx + 42dch]
        imul edx, edi
        mov ebp, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        sub ebp, eax
        mov dword ptr [ebx + 24h], ebp
        mov edx, dword ptr [ecx + 42d8h]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov ebp, edx
        shr ebp, 1fh
        add ebp, edx
        mov edx, dword ptr [ecx + 42dch]
        imul edx, esi
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add ebp, edx
        add eax, ebp
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 38h]
        sar eax, 1
        mov dword ptr [ebx + 28h], eax
        mov ebx, dword ptr [esp + 2ch]
        lea eax, [ecx + 1ca0h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 3ch], edx
        add ebp, 680h
        mov dword ptr [esp + 1ch], 8
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx - 4]
        imul eax, edi
        mov edx, dword ptr [ebx - 8]
        imul edx, esi
        sub edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 6
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebx - 4]
        mov eax, dword ptr [ebx - 8]
        imul edx, esi
        imul eax, edi
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 7
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [ebp], eax
        mov eax, dword ptr [edx - 4]
        mov edx, dword ptr [ecx + 100ch]
        movzx edx, byte ptr [eax + edx + 27ch]
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx - 4], eax
        mov eax, dword ptr [ebx + 4]
        mov edx, dword ptr [ebx]
        imul eax, edi
        imul edx, esi
        sub edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 6
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ebp + 11ch], eax
        mov edx, dword ptr [ebx]
        mov eax, dword ptr [ebx + 4]
        imul edx, edi
        imul eax, esi
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 7
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ebp + 120h], eax
        mov edx, dword ptr [ecx + 100ch]
        mov eax, dword ptr [esp + 3ch]
        mov eax, dword ptr [eax]
        movzx edx, byte ptr [edx + eax + 27ch]
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebx + 0ch]
        mov edx, dword ptr [ebx + 8]
        imul eax, edi
        imul edx, esi
        sub edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 6
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ebp + 23ch], eax
        mov edx, dword ptr [ebx + 8]
        mov eax, dword ptr [ebx + 0ch]
        imul edx, edi
        imul eax, esi
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 7
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [ebp + 240h], eax
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ecx + 100ch]
        movzx edx, byte ptr [eax + edx + 27ch]
        imul edx, edx, 56h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebx + 14h]
        mov edx, dword ptr [ebx + 10h]
        imul eax, edi
        imul edx, esi
        sub edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 6
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov dword ptr [ebp + 35ch], eax
        mov edx, dword ptr [ebx + 10h]
        mov eax, dword ptr [ebx + 14h]
        imul edx, edi
        imul eax, esi
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        mov eax, edx
        sar eax, 7
        mov edx, eax
        shr edx, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, dword ptr [esp + 3ch]
        mov dword ptr [ebp + 360h], eax
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [ecx + 100ch]
        movzx edx, byte ptr [eax + edx + 27ch]
        imul edx, edx, 56h
        add dword ptr [esp + 3ch], 10h
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        mov edx, eax
        mov eax, dword ptr [esp + 14h]
        mov dword ptr [eax + 8], edx
        add eax, 10h
        add ebx, 20h
        add ebp, 480h
        sub dword ptr [esp + 1ch], 1
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 68 FD FF FF: jne 0x588d9960
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 10h]
        add esi, dword ptr [esp + 20h]
        mov eax, 6e5d4c3bh
        imul esi
        add dword ptr [esp + 38h], 8
        add dword ptr [esp + 18h], 30h
        sub edx, esi
        sar edx, 0bh
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        imul eax, eax, 0e10h
        add esi, eax
        sub dword ptr [esp + 24h], 1
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 0F 85 0C F9 FF FF: jne 0x588d9540
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
