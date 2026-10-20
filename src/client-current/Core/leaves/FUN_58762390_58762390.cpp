// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58762390 .. +0x1F6 bytes.
extern "C" __declspec(naked) void FUN_58762390_58762390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x587623a6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DA 01 00 00: jmp 0x58762580
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 3ch], eax
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 38h], eax
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 4ch], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 38h]
        add edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 48h], edx
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [ebp + 8]
        add eax, dword ptr [edx + ecx + 8ch]
        mov dword ptr [ebp - 44h], eax
        mov eax, 10h
        imul ecx, eax, 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [ebp + 8]
        add eax, dword ptr [edx + ecx + 90h]
        mov dword ptr [ebp - 40h], eax
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 44h]
        add edx, dword ptr [ecx + eax + 94h]
        mov dword ptr [ebp - 54h], edx
        mov eax, 10h
        shl eax, 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 40h]
        add edx, dword ptr [ecx + eax + 98h]
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp - 4ch]
        cmp eax, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7C 18: jl 0x58762492
        __asm _emit 0x7c
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 7F 10: jg 0x58762492
        __asm _emit 0x7f
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 48h]
        cmp edx, dword ptr [ebp - 40h]
        ; Exact mapped bytes 7C 08: jl 0x58762492
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7E 07: jle 0x58762499
        __asm _emit 0x7e
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x58762580
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes 7E 08: jle 0x587624a9
        __asm _emit 0x7e
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 06: jmp 0x587624af
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 4ch]
        cmp edx, dword ptr [ebp - 54h]
        ; Exact mapped bytes 7D 08: jge 0x587624c5
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 06: jmp 0x587624cb
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 38h]
        cmp eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes 7E 08: jle 0x587624e1
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 06: jmp 0x587624e7
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 48h]
        cmp ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes 7D 08: jge 0x587624fd
        __asm _emit 0x7d
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 1ch], edx
        ; Exact mapped bytes EB 06: jmp 0x58762503
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x5876251a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 7D 5C: jge 0x5876257e
        __asm _emit 0x7d
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x58762533
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 7D 41: jge 0x5876257c
        __asm _emit 0x7d
        __asm _emit 0x41
        push 0
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 FC FF FF: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 75 02: jne 0x58762558
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x5876252a
        __asm _emit 0xeb
        __asm _emit 0xd2
        push 0
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 FC FF FF: call 0x58762220
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 07: je 0x5876257a
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 06: jmp 0x58762580
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes EB AE: jmp 0x5876252a
        __asm _emit 0xeb
        __asm _emit 0xae
        ; Exact mapped bytes EB 93: jmp 0x58762511
        __asm _emit 0xeb
        __asm _emit 0x93
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
