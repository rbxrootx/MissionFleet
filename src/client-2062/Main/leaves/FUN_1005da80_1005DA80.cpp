// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005DA80 .. +0x375 bytes.
extern "C" __declspec(naked) void FUN_1005da80_1005DA80() {
    __asm {
        sub esp, 10h
        push edi
        mov edi, ecx
        xor eax, eax
        mov dword ptr [esp + 10h], 32h
        mov ecx, dword ptr [edi + 0d0ch]
        mov dword ptr [esp + 0ch], eax
        mov dword ptr [esp + 8], eax
        mov edx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 66 8B 4A 0A: mov cx, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x0a
        and ecx, 7c00h
        ; Exact mapped bytes 66 85 C9: test cx, cx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 0F 86 39 03 00 00: jbe 0x1005ddf0
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        ; Exact mapped bytes EB 02: jmp 0x1005dabe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esi, dword ptr [esp + 14h]
        mov ebp, 168h
        and esi, 0ffffh
        mov edx, esi
        mov dword ptr [edi + esi*4 + 0ba8h], eax
        mov eax, dword ptr [edi + 0d0ch]
        lea ecx, [esi + esi]
        mov eax, dword ptr [eax + 0b4ch]
        mov ebx, ecx
        shr edx, 4
        mov ecx, 1eh
        mov edx, dword ptr [eax + edx*4 + 260h]
        sub ecx, ebx
        shr edx, cl
        mov ebx, 168h
        and edx, 3
        mov dword ptr [edi + esi*4 + 0c28h], edx
        mov dword ptr [edi + esi*4 + 0ba8h], 1
        mov eax, dword ptr [edi + 0d0ch]
        mov ecx, dword ptr [eax + 0b4ch]
        ; Exact mapped bytes 0F BF 84 B1 54 01 00 00: movsx eax, word ptr [ecx + esi*4 + 0x154]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 72h
        cdq
        idiv ebx
        ; Exact mapped bytes 0F BF 84 B1 56 01 00 00: movsx eax, word ptr [ecx + esi*4 + 0x156]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 72h
        mov ebx, edx
        cdq
        idiv ebp
        mov eax, dword ptr [edi + esi*4 + 0c28h]
        test eax, eax
        mov ebp, edx
        ; Exact mapped bytes 75 39: jne 0x1005db84
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 66 39 84 71 14 01 00 00: cmp word ptr [ecx + esi*2 + 0x114], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes 0F 85 FA 00 00 00: jne 0x1005dc55
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        shl ecx, 5
        lea edx, [ebp + ebp*4]
        lea eax, [ecx + edi]
        mov dword ptr [esp + 10h], eax
        add eax, 7a8h
        shl edx, 1
        push edx
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes E8 54 43 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebx + ebx*4]
        ; Exact mapped bytes E9 F5 00 00 00: jmp 0x1005dc79
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x1005dc53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x1005dc53
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 0F 85 F5 00 00 00: jne 0x1005dc94
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        lea edx, [ebx + ebx*4]
        shl ecx, 5
        shl edx, 1
        lea eax, [ecx + edi]
        push edx
        mov dword ptr [esp + 14h], eax
        add eax, 7a8h
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes E8 0F 43 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x43
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp + ebp*4]
        mov ebp, dword ptr [esp + 1ch]
        shl ecx, 1
        lea edx, [ebp + 7b0h]
        push ecx
        lea eax, [esp + 28h]
        push edx
        push eax
        ; Exact mapped bytes E8 F3 42 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 0d0ch]
        mov eax, 72h
        mov ebx, 168h
        add esp, 18h
        mov ecx, dword ptr [ecx + 0b4ch]
        ; Exact mapped bytes 0F BF 94 B1 54 01 00 00: movsx edx, word ptr [ecx + esi*4 + 0x154]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, edx
        cdq
        idiv ebx
        ; Exact mapped bytes 0F BF 8C B1 56 01 00 00: movsx ecx, word ptr [ecx + esi*4 + 0x156]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8c
        __asm _emit 0xb1
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 72h
        sub eax, ecx
        mov ecx, 168h
        mov ebx, edx
        cdq
        idiv ecx
        test ebx, ebx
        ; Exact mapped bytes 7D 02: jge 0x1005dc22
        __asm _emit 0x7d
        __asm _emit 0x02
        add ebx, ecx
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x1005dc2c
        __asm _emit 0x7d
        __asm _emit 0x06
        add edx, 168h
        lea edx, [edx + edx*4]
        add ebp, 7b8h
        shl edx, 1
        push edx
        lea eax, [esp + 1ch]
        push ebp
        push eax
        ; Exact mapped bytes E8 8D 42 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebx + ebx*4]
        lea edx, [esi + 3eh]
        shl ecx, 1
        shl edx, 5
        push ecx
        add edx, edi
        ; Exact mapped bytes EB 33: jmp 0x1005dc86
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, esi
        shl ecx, 5
        lea edx, [ebx + ebx*4]
        lea eax, [ecx + edi]
        mov dword ptr [esp + 10h], eax
        add eax, 7a8h
        shl edx, 1
        push edx
        push eax
        lea eax, [esp + 20h]
        push eax
        ; Exact mapped bytes E8 5B 42 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        lea ecx, [ebp + ebp*4]
        mov edx, dword ptr [esp + 1ch]
        shl ecx, 1
        push ecx
        add edx, 7b0h
        lea eax, [esp + 28h]
        push edx
        push eax
        ; Exact mapped bytes E8 3F 42 FC FF: call 0x10021ed0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x42
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 18h
        mov edx, dword ptr [edi + esi*4 + 4bch]
        mov ecx, esi
        shl ecx, 4
        lea eax, [ecx + edi]
        mov ecx, dword ptr [edx + 4]
        add ecx, dword ptr [edi + 598h]
        mov dword ptr [eax + 5a8h], ecx
        mov edx, dword ptr [edi + esi*4 + 4bch]
        mov ebp, dword ptr [edi + 5a0h]
        mov ecx, dword ptr [edx + 4]
        lea edx, [esi + 5bh]
        shl edx, 4
        add ecx, ebp
        mov dword ptr [edx + edi], ecx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov ebp, dword ptr [edi + 59ch]
        mov edx, dword ptr [ecx + 8]
        add edx, ebp
        mov dword ptr [eax + 5ach], edx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov ebx, dword ptr [edi + 5a4h]
        mov edx, dword ptr [ecx + 8]
        add edx, ebx
        mov dword ptr [eax + 5b4h], edx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov eax, esi
        mov edx, dword ptr [ecx + 4]
        shl eax, 5
        add eax, edi
        mov ebp, dword ptr [eax + 7a8h]
        add ebp, edx
        mov dword ptr [eax + 7a8h], ebp
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov ebx, dword ptr [eax + 7ach]
        mov edx, dword ptr [ecx + 8]
        sub edx, ebx
        mov dword ptr [eax + 7ach], edx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 7b0h]
        add ecx, edx
        mov dword ptr [eax + 7b0h], ecx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov ebp, dword ptr [eax + 7b4h]
        mov edx, dword ptr [ecx + 8]
        sub edx, ebp
        mov dword ptr [eax + 7b4h], edx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov ebx, dword ptr [eax + 7b8h]
        mov edx, dword ptr [ecx + 4]
        add ebx, edx
        mov dword ptr [eax + 7b8h], ebx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [eax + 7bch]
        sub edx, ecx
        lea ecx, [esi + 3eh]
        shl ecx, 5
        mov dword ptr [eax + 7bch], edx
        mov edx, dword ptr [edi + esi*4 + 4bch]
        mov ebx, dword ptr [ecx + edi]
        add ecx, edi
        mov edx, dword ptr [edx + 4]
        add ebx, edx
        mov dword ptr [ecx], ebx
        mov ecx, dword ptr [edi + esi*4 + 4bch]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [eax + 7c4h]
        sub edx, ecx
        mov dword ptr [eax + 7c4h], edx
        mov ecx, dword ptr [edi + 0d0ch]
        mov eax, dword ptr [esp + 14h]
        mov edx, dword ptr [ecx + 0b4ch]
        inc eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 66 8B 4A 0A: mov cx, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4a
        __asm _emit 0x0a
        shr ecx, 0ah
        and ecx, 1fh
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 0F 82 CF FC FF FF: jb 0x1005dabc
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        pop edi
        add esp, 10h
        ret
    }
}
