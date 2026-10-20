// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE090 .. +0x15E bytes.
extern "C" __declspec(naked) void FUN_588ce090() {
    __asm {
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 A4 EB 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 97 EB 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 54h]
        ; Exact mapped bytes 8B 2D 30 C0 98 58: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, 2
        mov dword ptr [edx + 30h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 34h], eax
        mov edx, dword ptr [esi + 54h]
        mov eax, 80h
        mov dword ptr [edx + 38h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [esi + 54h]
        mov eax, 7dh
        mov dword ptr [edx + 40h], eax
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [ecx + 44h], eax
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [esi + 54h]
        add esp, 18h
        cmp dword ptr [esp + 0ch], 0
        mov dword ptr [eax + 4ch], 1
        ; Exact mapped bytes 74 1A: je 0x588ce122
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [esi + 50h]
        mov edx, 8
        ; Exact mapped bytes 66 89 91 84 00 00 00: mov word ptr [ecx + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 50h]
        mov ecx, edx
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        ; Exact mapped bytes EB 52: jmp 0x588ce174
        __asm _emit 0xeb
        __asm _emit 0x52
        mov edx, dword ptr [esi + 50h]
        mov eax, 9
        ; Exact mapped bytes 66 89 82 84 00 00 00: mov word ptr [edx + 0x84], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 50h]
        push edi
        mov edx, eax
        push 589a06fch
        ; Exact mapped bytes 66 89 51 36: mov word ptr [ecx + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x36
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, 30h
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        lea edx, [edi + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x588ce16b
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 0B: je 0x588ce16b
        __asm _emit 0x74
        __asm _emit 0x0b
        mov byte ptr [ecx], dl
        inc ecx
        inc eax
        sub edi, 1
        ; Exact mapped bytes 75 E7: jne 0x588ce150
        __asm _emit 0x75
        __asm _emit 0xe7
        ; Exact mapped bytes EB 04: jmp 0x588ce16f
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 01: jne 0x588ce170
        __asm _emit 0x75
        __asm _emit 0x01
        dec ecx
        mov byte ptr [ecx], 0
        pop edi
        mov eax, dword ptr [esi + 50h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0f2h
        or cl, 2
        mov byte ptr [eax + 32h], cl
        mov eax, dword ptr [esi + 50h]
        and byte ptr [eax + 31h], 80h
        mov edx, dword ptr [esi + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 46h], 1
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffbh
        push 5899d8b8h
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov esi, dword ptr [esi + 50h]
        add esp, 4
        mov ecx, 30h
        nop
        lea edx, [ecx + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x588ce1e1
        __asm _emit 0x74
        __asm _emit 0x17
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 11: je 0x588ce1e1
        __asm _emit 0x74
        __asm _emit 0x11
        mov byte ptr [esi], dl
        inc esi
        inc eax
        sub ecx, 1
        ; Exact mapped bytes 75 E7: jne 0x588ce1c0
        __asm _emit 0x75
        __asm _emit 0xe7
        dec esi
        mov byte ptr [esi], cl
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 01: jne 0x588ce1e6
        __asm _emit 0x75
        __asm _emit 0x01
        dec esi
        mov byte ptr [esi], 0
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
