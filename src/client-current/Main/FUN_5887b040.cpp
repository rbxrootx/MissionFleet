// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 507 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B040 .. +0x1FB bytes.
extern "C" __declspec(naked) void FUN_5887b040_segment_00() {
    __asm {
        sub esp, 808h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 804h], eax
        push ebx
        push ebp
        push esi
        push edi
        push 3ffh
        lea eax, [esp + 19h]
        push 0
        push eax
        mov ebx, ecx
        mov byte ptr [esp + 20h], 20h
        ; Exact mapped bytes E8 D8 1B 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        push 3ffh
        lea ecx, [esp + 425h]
        push 0
        push ecx
        mov byte ptr [esp + 42ch], 20h
        ; Exact mapped bytes E8 BC 1B 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x1b
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 18h
        xor ebp, ebp
        xor esi, esi
        xor edi, edi
        mov dword ptr [esp + 10h], edi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 74h]
        mov al, byte ptr [edx + edi + 44h]
        mov byte ptr [esp + esi + 414h], al
        cmp al, 20h
        ; Exact mapped bytes 74 16: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x16
        cmp al, 9
        ; Exact mapped bytes 74 12: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x12
        cmp al, 0ah
        ; Exact mapped bytes 74 0E: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x0e
        test al, al
        ; Exact mapped bytes 74 0A: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp al, 0dh
        ; Exact mapped bytes 74 06: je 0x5887b0c8
        __asm _emit 0x74
        __asm _emit 0x06
        inc esi
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x5887b1f8
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        inc esi
        lea eax, [esi + ebp]
        cmp eax, 32h
        lea ecx, [esp + 14h]
        ; Exact mapped bytes 0F 8F 80 00 00 00: jg 0x5887b159
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, eax
        mov eax, 400h
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 08: je 0x5887b0ed
        __asm _emit 0x74
        __asm _emit 0x08
        inc ecx
        sub eax, 1
        ; Exact mapped bytes 75 F5: jne 0x5887b0e0
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 55: jmp 0x5887b142
        __asm _emit 0xeb
        __asm _emit 0x55
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x5887b142
        __asm _emit 0x74
        __asm _emit 0x51
        mov edx, 400h
        sub edx, eax
        mov ecx, 400h
        sub ecx, edx
        lea eax, [esp + edx + 14h]
        ; Exact mapped bytes 74 33: je 0x5887b138
        __asm _emit 0x74
        __asm _emit 0x33
        lea edi, [esp + 414h]
        lea esi, [ecx + edx + 7ffffbffh]
        sub edi, eax
        test esi, esi
        ; Exact mapped bytes 74 17: je 0x5887b130
        __asm _emit 0x74
        __asm _emit 0x17
        mov dl, byte ptr [edi + eax]
        test dl, dl
        ; Exact mapped bytes 74 10: je 0x5887b130
        __asm _emit 0x74
        __asm _emit 0x10
        mov byte ptr [eax], dl
        dec ecx
        inc eax
        dec esi
        test ecx, ecx
        ; Exact mapped bytes 75 EC: jne 0x5887b115
        __asm _emit 0x75
        __asm _emit 0xec
        mov edi, dword ptr [esp + 10h]
        dec eax
        ; Exact mapped bytes EB 0F: jmp 0x5887b13f
        __asm _emit 0xeb
        __asm _emit 0x0f
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x5887b13b
        __asm _emit 0x75
        __asm _emit 0x07
        mov edi, dword ptr [esp + 10h]
        dec eax
        ; Exact mapped bytes EB 04: jmp 0x5887b13f
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esp + 10h]
        mov byte ptr [eax], 0
        push 32h
        xor esi, esi
        lea eax, [esp + 418h]
        push esi
        push eax
        ; Exact mapped bytes E8 F4 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 51: jmp 0x5887b1aa
        __asm _emit 0xeb
        __asm _emit 0x51
        push 0ffffffh
        push -1
        push ecx
        mov ecx, dword ptr [ebx + 1b8h]
        ; Exact mapped bytes E8 64 D7 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0x08
        __asm _emit 0x00
        mov ebp, esi
        push 400h
        xor esi, esi
        lea edx, [esp + 18h]
        push esi
        push edx
        ; Exact mapped bytes E8 C8 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        lea eax, [esp + 420h]
        push eax
        lea ecx, [esp + 24h]
        push 400h
        push ecx
        ; Exact mapped bytes E8 F5 1C 10 00: call 0x5897ce8c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1c
        __asm _emit 0x10
        __asm _emit 0x00
        push 32h
        lea edx, [esp + 430h]
        push esi
        push edx
        ; Exact mapped bytes E8 A1 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 24h
        mov eax, dword ptr [ebx + 74h]
        mov al, byte ptr [eax + edi + 44h]
        cmp al, 0ah
        ; Exact mapped bytes 74 56: je 0x5887b20b
        __asm _emit 0x74
        __asm _emit 0x56
        test al, al
        ; Exact mapped bytes 74 52: je 0x5887b20b
        __asm _emit 0x74
        __asm _emit 0x52
        cmp al, 0dh
        ; Exact mapped bytes 75 3B: jne 0x5887b1f8
        __asm _emit 0x75
        __asm _emit 0x3b
        test ebp, ebp
        ; Exact mapped bytes 7E 0A: jle 0x5887b1cb
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov byte ptr [esp + ebp + 13h], 20h
        mov byte ptr [esp + ebp + 14h], 0
        push 0ffffffh
        push -1
        lea ecx, [esp + 1ch]
        push ecx
        mov ecx, dword ptr [ebx + 1b8h]
        inc edi
        xor ebp, ebp
        ; Exact mapped bytes E8 EB D6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        push 400h
        lea edx, [esp + 18h]
        push ebp
        push edx
        ; Exact mapped bytes E8 53 1A 10 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x1a
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        inc edi
        mov dword ptr [esp + 10h], edi
        cmp edi, 400h
        ; Exact mapped bytes 0F 82 97 FE FF FF: jb 0x5887b0a0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 17: jmp 0x5887b222
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebx + 1b8h]
        push 0ffffffh
        push -1
        lea eax, [esp + 1ch]
        push eax
        ; Exact mapped bytes E8 AE D6 08 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 814h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 A6 19 10 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x19
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 808h
        ret
    }
}
