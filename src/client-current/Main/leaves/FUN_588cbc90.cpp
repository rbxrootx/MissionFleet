// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CBC90 .. +0x168 bytes.
extern "C" __declspec(naked) void FUN_588cbc90() {
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
        ; Exact mapped bytes E8 A2 0F 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 95 0F 0B 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ebp, 1
        mov dword ptr [edx + 10h], ebp
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 20h], ebp
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 0ch], ebp
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 24h], ebp
        mov ecx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 30h], eax
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 3ch], 14h
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 38h], 80h
        mov eax, dword ptr [esi + 54h]
        mov edx, 64h
        mov dword ptr [eax + 44h], edx
        mov eax, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [eax + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], edx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 48h], ecx
        mov eax, dword ptr [esi + 50h]
        mov edi, 10h
        ; Exact mapped bytes 66 89 B8 84 00 00 00: mov word ptr [eax + 0x84], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xb8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 78 36: mov word ptr [eax + 0x36], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx ebx, byte ptr [eax + 32h]
        and bl, 0f2h
        or bl, 2
        mov byte ptr [eax + 32h], bl
        mov eax, dword ptr [esi + 50h]
        movzx ebx, byte ptr [eax + 31h]
        and bl, 0c0h
        or bl, 40h
        mov byte ptr [eax + 31h], bl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], dl
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 47h], cl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffbh
        push 5899a480h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 1ch
        mov edi, 30h
        lea edx, [edi + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cbda0
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 0C: je 0x588cbda0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], dl
        add ecx, ebp
        add eax, ebp
        sub edi, ebp
        ; Exact mapped bytes 75 E6: jne 0x588cbd84
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cbda4
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x588cbda6
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebp
        mov byte ptr [ecx], 0
        ; Exact mapped bytes A1 64 47 A2 58: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588cbdca
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588cbdca
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588cbdcc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [eax + 4]
        lea eax, [ecx + edx + 2ch]
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [ecx + 6ch], eax
        mov esi, dword ptr [esi + 5ch]
        mov edx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 8ch]
        pop edi
        mov dword ptr [esi + 50h], edx
        mov dword ptr [esi + 54h], eax
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
