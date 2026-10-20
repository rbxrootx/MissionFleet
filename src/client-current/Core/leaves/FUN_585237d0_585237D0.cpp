// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585237D0 .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_585237d0_585237D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881a49h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 75 70: jne 0x58523873
        __asm _emit 0x75
        __asm _emit 0x70
        push 314h
        ; Exact mapped bytes E8 F7 D7 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd7
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 1F: je 0x5852383f
        __asm _emit 0x74
        __asm _emit 0x1f
        sub esp, 30ch
        mov ecx, 0c3h
        lea esi, [ebp + 8]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C6 FE FF FF: call 0x58523700
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58523846
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5852390d
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        push 314h
        ; Exact mapped bytes E8 7E D7 30 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd7
        __asm _emit 0x30
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 1F: je 0x585238b8
        __asm _emit 0x74
        __asm _emit 0x1f
        sub esp, 30ch
        mov ecx, 0c3h
        lea esi, [ebp + 8]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4D FE FF FF: call 0x58523700
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x585238bf
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F8 F2 FF FF: call 0x58522bd0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 4C 41 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 34 BC F7 FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 29 41 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
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
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 03: ret 0x30c
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x03
    }
}
