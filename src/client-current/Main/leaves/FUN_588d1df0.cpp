// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D1DF0 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_588d1df0() {
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
        ; Exact mapped bytes E8 42 AE 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 35 AE 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xae
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [edx + 10h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 0ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 28h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 24h], ebx
        mov ecx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], eax
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 38h], 80h
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 3ch], 14h
        mov edx, dword ptr [esi + 54h]
        mov ecx, 53h
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 0eh
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
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 0c0h
        or dl, 40h
        mov byte ptr [eax + 31h], dl
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], ebx
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 4
        push 5899a4a8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 1ch
        mov edi, eax
        mov ebp, 30h
        lea edx, [ebp + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588d1efc
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588d1efc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub ebp, ebx
        ; Exact mapped bytes 75 E6: jne 0x588d1ee0
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588d1f00
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x588d1f02
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes A1 58 47 A2 58: mov eax, dword ptr [0x58a24758]
        __asm _emit 0xa1
        __asm _emit 0x58
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588d1f26
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588d1f26
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 18ch]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 02: jmp 0x588d1f28
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
