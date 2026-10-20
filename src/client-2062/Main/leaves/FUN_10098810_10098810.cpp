// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10098810 .. +0x21B bytes.
extern "C" __declspec(naked) void FUN_10098810_10098810() {
    __asm {
        sub esp, 54h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 78h]
        ; Exact mapped bytes E8 EF BE 06 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 7ch]
        ; Exact mapped bytes E8 E7 BE 06 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 80h]
        ; Exact mapped bytes E8 DC BE 06 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xbe
        __asm _emit 0x06
        __asm _emit 0x00
        xor ebp, ebp
        mov ebx, 101ace80h
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 20h], ebx
        mov eax, dword ptr [ebx]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x10098972
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C0 58 1C 10: mov ecx, dword ptr [0x101c58c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 76 24 06 00: call 0x100facd0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        mov esi, eax
        cmp esi, ebp
        ; Exact mapped bytes 0F 84 4D 01 00 00: je 0x100989b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4ch]
        mov ecx, dword ptr [edi + 78h]
        push 0ffffffh
        add eax, 328h
        push -1
        push eax
        ; Exact mapped bytes E8 31 B4 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb4
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4ch]
        mov eax, dword ptr [esi + 4ch]
        xor eax, 0aaaaaaaah
        mov edx, dword ptr [ecx + 54h]
        lea ecx, [esp + 24h]
        push edx
        push eax
        push 101abc1ch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 7ch]
        add esp, 10h
        lea edx, [esp + 24h]
        push 0ffffffh
        push -1
        push edx
        ; Exact mapped bytes E8 F7 B3 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0b4ch]
        mov edx, dword ptr [esp + 10h]
        mov ecx, 1fh
        xor ebx, ebx
        sub ecx, edx
        mov edx, dword ptr [eax + 254h]
        shr edx, cl
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 1ch], 20h
        and edx, 1
        add esi, 94ch
        mov dword ptr [esp + 18h], esi
        test edx, edx
        mov eax, esi
        mov ecx, 2
        ; Exact mapped bytes 75 1D: jne 0x10098915
        __asm _emit 0x75
        __asm _emit 0x1d
        xor esi, esi
        ; Exact mapped bytes 66 8B 30: mov si, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x30
        add eax, 2
        xor esi, 0aah
        add ebp, esi
        dec ecx
        ; Exact mapped bytes 75 ED: jne 0x100988f8
        __asm _emit 0x75
        __asm _emit 0xed
        mov esi, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes EB 17: jmp 0x1009892c
        __asm _emit 0xeb
        __asm _emit 0x17
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 28: mov bp, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x28
        add eax, 2
        xor ebp, 0aah
        add ebx, ebp
        dec ecx
        ; Exact mapped bytes 75 ED: jne 0x10098915
        __asm _emit 0x75
        __asm _emit 0xed
        mov ebp, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 1ch]
        add esi, 4
        dec eax
        mov dword ptr [esp + 18h], esi
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 75 AF: jne 0x100988ed
        __asm _emit 0x75
        __asm _emit 0xaf
        push ebx
        push ebp
        lea ecx, [esp + 2ch]
        push 101abc1ch
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 80h]
        add esp, 10h
        lea edx, [esp + 24h]
        push 0ffffffh
        push -1
        push edx
        ; Exact mapped bytes E8 46 B3 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 20h]
        xor ebp, ebp
        ; Exact mapped bytes EB 3F: jmp 0x100989b1
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [edi + 78h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 2A B3 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 7ch]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 16 B3 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 80h]
        push 0ffffffh
        push -1
        push 101ace48h
        ; Exact mapped bytes E8 FF B2 06 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        add ebx, 4
        inc edx
        cmp ebx, 101ace94h
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 0F 8C 76 FE FF FF: jl 0x10098843
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        mov edx, 101ace80h
        add edi, 98h
        xor eax, eax
        ; Exact mapped bytes A0 99 CE 1A 10: mov al, byte ptr [0x101ace99]
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp esi, eax
        ; Exact mapped bytes 75 1D: jne 0x10098a02
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [edx], -1
        ; Exact mapped bytes 74 18: je 0x10098a02
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, edi
        mov ecx, 2
        mov ebx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebx + 50h], 1
        ; Exact mapped bytes 75 F1: jne 0x100989f1
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 12: jmp 0x10098a14
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, edi
        mov ecx, 2
        mov ebx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebx + 50h], ebp
        ; Exact mapped bytes 75 F5: jne 0x10098a09
        __asm _emit 0x75
        __asm _emit 0xf5
        add edx, 4
        inc esi
        add edi, 8
        cmp edx, 101ace94h
        ; Exact mapped bytes 7C B7: jl 0x100989da
        __asm _emit 0x7c
        __asm _emit 0xb7
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 54h
        ret
    }
}
