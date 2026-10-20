// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CC340 .. +0x1B8 bytes.
extern "C" __declspec(naked) void FUN_588cc340() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 F2 08 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 E5 08 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], eax
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], 40h
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 3ch], 0ch
        mov edx, dword ptr [esi + 54h]
        mov ecx, 3ch
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 5
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 42 36: mov word ptr [edx + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 32h]
        and dl, 0f2h
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 0a4h
        or dl, 24h
        mov byte ptr [eax + 31h], dl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        push 5899a568h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 50h]
        add esp, 1ch
        mov edi, 30h
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cc44c
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 0C: je 0x588cc44c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], dl
        add ecx, ebx
        add eax, ebx
        sub edi, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cc430
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cc450
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x588cc452
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        push 58997fd0h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, 14h
        add ecx, 0a6h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [edi + 7fffffeah]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cc48c
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 0C: je 0x588cc48c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], dl
        add ecx, ebx
        add eax, ebx
        sub edi, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cc470
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cc490
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x588cc492
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes 8B 0D 28 46 A2 58: mov ecx, dword ptr [0x58a24628]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 A8 EC FF: call 0x58796d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa8
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 50h]
        mov dword ptr [ecx + 80h], eax
        ; Exact mapped bytes A1 44 47 A2 58: mov eax, dword ptr [0x58a24744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588cc4ca
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588cc4ca
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes EB 02: jmp 0x588cc4cc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [eax + 4]
        lea edx, [eax + ecx + 2ch]
        mov eax, dword ptr [esi + 5ch]
        mov dword ptr [eax + 6ch], edx
        mov esi, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], ecx
        mov dword ptr [esi + 54h], edx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
