// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CDD70 .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_588cdd70() {
    __asm {
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov eax, dword ptr [esi + 50h]
        push 0c4h
        push 0
        push eax
        ; Exact mapped bytes E8 C3 EE 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xee
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        push 50h
        push 0
        push ecx
        ; Exact mapped bytes E8 B6 EE 0A 00: call 0x5897cc48
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xee
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
        mov ecx, 7dh
        mov dword ptr [edx + 40h], ecx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 44h], ecx
        mov edx, dword ptr [esi + 54h]
        mov dword ptr [edx + 48h], ebx
        mov eax, dword ptr [esi + 54h]
        mov dword ptr [eax + 4ch], ebx
        mov edx, dword ptr [esi + 50h]
        mov eax, 0ch
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
        mov dl, byte ptr [eax + 32h]
        and dl, 0f2h
        or dl, 2
        mov byte ptr [eax + 32h], dl
        mov eax, dword ptr [esi + 50h]
        and byte ptr [eax + 31h], 80h
        mov eax, dword ptr [esi + 50h]
        mov byte ptr [eax + 47h], cl
        mov ecx, dword ptr [esi + 50h]
        mov byte ptr [ecx + 46h], bl
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffdh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffeh
        mov eax, dword ptr [esi + 50h]
        and dword ptr [eax + 3ch], 0fffffffbh
        add esp, 18h
        cmp dword ptr [esp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x588cde48
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [esi + 50h]
        xor eax, eax
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        mov ecx, dword ptr [esi + 50h]
        movzx eax, word ptr [ecx + 38h]
        sub eax, 0
        ; Exact mapped bytes 74 0C: je 0x588cde60
        __asm _emit 0x74
        __asm _emit 0x0c
        sub eax, ebx
        ; Exact mapped bytes 75 0E: jne 0x588cde66
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 06: jmp 0x588cde66
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [esi + 74h]
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [esi + 50h]
        movzx edx, word ptr [ecx + 38h]
        mov eax, dword ptr [esi + edx*4 + 70h]
        push 589a0d84h
        mov dword ptr [eax + 50h], 5
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 50h]
        add esp, 4
        mov edi, 30h
        mov edi, edi
        lea edx, [edi + 7fffffceh]
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x588cdeac
        __asm _emit 0x74
        __asm _emit 0x12
        mov dl, byte ptr [eax]
        test dl, dl
        ; Exact mapped bytes 74 0C: je 0x588cdeac
        __asm _emit 0x74
        __asm _emit 0x0c
        mov byte ptr [ecx], dl
        add ecx, ebx
        add eax, ebx
        sub edi, ebx
        ; Exact mapped bytes 75 E6: jne 0x588cde90
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes EB 04: jmp 0x588cdeb0
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 75 02: jne 0x588cdeb2
        __asm _emit 0x75
        __asm _emit 0x02
        sub ecx, ebx
        mov byte ptr [ecx], 0
        mov eax, dword ptr [esi + 50h]
        or dword ptr [eax + 3ch], 8
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 5C 95 FC FF: call 0x58897420
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 78h]
        mov eax, 0ah
        mov dword ptr [ecx + 188h], eax
        mov edx, dword ptr [esi + 78h]
        mov dword ptr [edx + 18ch], eax
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 190h], eax
        mov edx, dword ptr [esi + 78h]
        mov eax, 3
        mov dword ptr [edx + 194h], eax
        mov ecx, dword ptr [esi + 78h]
        mov dword ptr [ecx + 198h], eax
        mov edx, dword ptr [esi + 78h]
        mov dword ptr [edx + 19ch], eax
        mov eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 83 48 24 0F: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0f
        mov ecx, esi
        ; Exact mapped bytes E8 1D FC FF FF: call 0x588cdb30
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 5ch]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes A1 50 47 A2 58: mov eax, dword ptr [0x58a24750]
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 0
        ; Exact mapped bytes 7E 13: jle 0x588cdf40
        __asm _emit 0x7e
        __asm _emit 0x13
        cmp dword ptr [eax + 18ch], 0
        ; Exact mapped bytes 74 0A: je 0x588cdf40
        __asm _emit 0x74
        __asm _emit 0x0a
        mov edx, dword ptr [eax + 18ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes EB 02: jmp 0x588cdf42
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
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
