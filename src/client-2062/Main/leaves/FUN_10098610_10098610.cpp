// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10098610 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_10098610_10098610() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 0F 84 96 01 00 00: je 0x100987b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [edi + 0d8h]
        push ebx
        xor ebx, ebx
        cmp al, bl
        ; Exact mapped bytes 0F 85 E6 00 00 00: jne 0x10098715
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 64h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, 258h
        ; Exact mapped bytes 74 65: je 0x100986a2
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, 258h
        sub eax, edx
        cmp eax, -8
        ; Exact mapped bytes 7E 45: jle 0x1009868e
        __asm _emit 0x7e
        __asm _emit 0x45
        cmp eax, 8
        ; Exact mapped bytes 7D 40: jge 0x1009868e
        __asm _emit 0x7d
        __asm _emit 0x40
        cmp eax, -4
        ; Exact mapped bytes 7E 2B: jle 0x1009867e
        __asm _emit 0x7e
        __asm _emit 0x2b
        cmp eax, 4
        ; Exact mapped bytes 7D 26: jge 0x1009867e
        __asm _emit 0x7d
        __asm _emit 0x26
        cmp eax, ebx
        ; Exact mapped bytes 7D 0E: jge 0x1009866a
        __asm _emit 0x7d
        __asm _emit 0x0e
        or eax, 0ffffffffh
        push eax
        ; Exact mapped bytes E8 1B 68 06 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x1009878f
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp eax, ebx
        setg dl
        mov eax, edx
        push eax
        ; Exact mapped bytes E8 07 68 06 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x68
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 11 01 00 00: jmp 0x1009878f
        __asm _emit 0xe9
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        ; Exact mapped bytes E8 F7 67 06 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x1009878f
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        ; Exact mapped bytes E8 E3 67 06 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x1009878f
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 60h]
        push ebp
        mov byte ptr [edi + 0d8h], 1
        mov ecx, edi
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes E8 58 01 00 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebp, ebp
        mov esi, 101ace80h
        lea edx, [edi + 98h]
        xor eax, eax
        ; Exact mapped bytes A0 99 CE 1A 10: mov al, byte ptr [0x101ace99]
        __asm _emit 0xa0
        __asm _emit 0x99
        __asm _emit 0xce
        __asm _emit 0x1a
        __asm _emit 0x10
        cmp ebp, eax
        ; Exact mapped bytes 75 1D: jne 0x100986ed
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 74 18: je 0x100986ed
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, edx
        mov ecx, 2
        mov ebx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebx + 50h], 1
        ; Exact mapped bytes 75 F1: jne 0x100986dc
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 16: jmp 0x10098703
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edx
        mov ecx, 2
        mov ebx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [ebx + 50h], 0
        ; Exact mapped bytes 75 F1: jne 0x100986f4
        __asm _emit 0x75
        __asm _emit 0xf1
        add esi, 4
        inc ebp
        add edx, 8
        cmp esi, 101ace94h
        ; Exact mapped bytes 7C B3: jl 0x100986c5
        __asm _emit 0x7c
        __asm _emit 0xb3
        pop ebp
        ; Exact mapped bytes EB 7A: jmp 0x1009878f
        __asm _emit 0xeb
        __asm _emit 0x7a
        cmp al, 2
        ; Exact mapped bytes 75 76: jne 0x1009878f
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [edi + 64h]
        mov edx, dword ptr [ecx + 4]
        cmp edx, 32ah
        ; Exact mapped bytes 74 3E: je 0x10098765
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, 32ah
        sub eax, edx
        cmp eax, -8
        ; Exact mapped bytes 0F 8E 57 FF FF FF: jle 0x1009868e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 0F 8D 4E FF FF FF: jge 0x1009868e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -4
        ; Exact mapped bytes 0F 8E 35 FF FF FF: jle 0x1009867e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 0F 8D 2C FF FF FF: jge 0x1009867e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, ebx
        ; Exact mapped bytes 0F 8D 10 FF FF FF: jge 0x1009866a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        push eax
        ; Exact mapped bytes E8 1D 67 06 00: call 0x100fee80
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x67
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x1009878f
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [edi + 60h]
        mov byte ptr [edi + 0d8h], 3
        or byte ptr [eax + 24h], 2
        mov eax, dword ptr [edi + 0d0h]
        mov dword ptr [edi + 0e0h], 0ffffffffh
        mov dword ptr [eax + 50h], ebx
        mov ecx, dword ptr [edi + 0d4h]
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [edi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100987b4
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100987af
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x10098797
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
