// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CCCB0 .. +0x21F bytes.
extern "C" __declspec(naked) void FUN_588cccb0() {
    __asm {
        cmp dword ptr [esp + 4], 0
        push esi
        mov esi, ecx
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x588cce83
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        push ebx
        push ebp
        push edi
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 77 FF 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 6A FF 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        mov ebx, 1
        mov dword ptr [edx + 0ch], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 1ch], ebx
        mov ecx, dword ptr [esi + 54h]
        mov eax, 2
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 34h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 38h], 80h
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [esi + 54h]
        mov ecx, 7dh
        mov dword ptr [eax + 40h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 44h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 48h], ebx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 4ch], ebx
        mov eax, dword ptr [esi + 50h]
        mov edx, 7
        ; Exact mapped bytes 66 89 90 84 00 00 00: mov word ptr [eax + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        ; Exact mapped bytes 66 89 50 36: mov word ptr [eax + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x36
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        movzx edx, byte ptr [eax + 31h]
        and dl, 98h
        or dl, 18h
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
        push 5899a508h
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
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        lea edx, [ebp + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588ccdbc
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588ccdbc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub ebp, ebx
        ; Exact mapped bytes 75 E6: jne 0x588ccda0
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588ccdc0
        __asm _emit 0xeb
        __asm _emit 0x04
        test ebp, ebp
        ; Exact mapped bytes 75 02: jne 0x588ccdc2
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        push 589a0724h
        mov byte ptr [ecx], 0
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, eax
        mov edx, 14h
        add ecx, 0a6h
        lea eax, [edx + 7fffffeah]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x588ccdff
        __asm _emit 0x74
        __asm _emit 0x12
        mov al, byte ptr [edi]
        test al, al
        ; Exact mapped bytes 74 0C: je 0x588ccdff
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], al
        add ecx, ebx
        add edi, ebx
        sub edx, ebx
        ; Exact mapped bytes 75 E6: jne 0x588ccde3
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cce03
        __asm _emit 0xeb
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x588cce05
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        ; Exact mapped bytes E8 29 FE 0A 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xfe
        __asm _emit 0x0a
        __asm _emit 0x00
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x588cce19
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        mov ecx, dword ptr [esi + 50h]
        add eax, 1388h
        mov dword ptr [ecx + 80h], eax
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 87h], 0ah
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 86h], 3
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 84h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 88h]
        mov dword ptr [ecx + 50h], ebx
        mov edx, dword ptr [esi + 80h]
        mov eax, 5
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 74h]
        mov dword ptr [edx + 50h], ebx
        mov eax, dword ptr [esi + 78h]
        pop edi
        pop ebp
        mov dword ptr [eax + 50h], 0
        pop ebx
        ; Exact mapped bytes A1 38 46 A2 58: mov eax, dword ptr [0x58a24638]
        __asm _emit 0xa1
        __asm _emit 0x38
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588ccea4
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588ccea4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [eax + 18ch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes EB 02: jmp 0x588ccea6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esi + 4]
        lea ecx, [edx + eax + 2ch]
        mov edx, dword ptr [esi + 5ch]
        mov dword ptr [edx + 6ch], ecx
        mov esi, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 8ch]
        mov dword ptr [esi + 50h], eax
        mov dword ptr [esi + 54h], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
