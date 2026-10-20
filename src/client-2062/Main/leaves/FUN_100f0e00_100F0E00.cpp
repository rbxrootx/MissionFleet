// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0E00 .. +0x1FF bytes.
extern "C" __declspec(naked) void FUN_100f0e00_100F0E00() {
    __asm {
        sub esp, 114h
        push ebx
        ; Exact mapped bytes 8B 1D F4 56 1C 10: mov ebx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebp
        push esi
        mov dword ptr [esp + 1ch], ecx
        xor ebp, ebp
        xor esi, esi
        add ecx, 3f0h
        push edi
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 14h], ebp
        mov dword ptr [esp + 18h], ecx
        mov eax, dword ptr [esp + 18h]
        mov ecx, dword ptr [eax]
        xor ecx, 0aah
        and ecx, 3ffh
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x100f0f5b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 12ch]
        mov edi, dword ptr [ebx + 10474h]
        mov esi, dword ptr [ebx + 1047ch]
        lea eax, [ebp + edx*4]
        xor edx, edx
        lea eax, [edi + eax*4]
        add eax, esi
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        test byte ptr [eax + edx*4], 3
        ; Exact mapped bytes 0F 85 DE 00 00 00: jne 0x100f0f57
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        test ecx, ecx
        ; Exact mapped bytes 0F 8E 83 00 00 00: jle 0x100f0f06
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 12ch]
        mov edx, dword ptr [esp + 14h]
        shl eax, 4
        add eax, edx
        xor edx, edx
        add eax, edi
        mov edi, ecx
        add eax, esi
        mov esi, 3e8h
        ; Exact mapped bytes F7 35 5C 45 1C 10: div dword ptr [0x101c455c]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 64 45 1C 10: mov eax, dword ptr [0x101c4564]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x1c
        __asm _emit 0x10
        add ecx, 63h
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div esi
        mov eax, 51eb851fh
        mov ebp, edx
        mul ecx
        mov esi, edx
        shr esi, 5
        cmp edi, 64h
        mov eax, 64h
        ; Exact mapped bytes 7F 02: jg 0x100f0ecf
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, edi
        imul eax, dword ptr [esp + 128h]
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        cmp ebp, edx
        ; Exact mapped bytes 73 0E: jae 0x100f0efc
        __asm _emit 0x73
        __asm _emit 0x0e
        mov eax, 51eb851fh
        mul edx
        shr edx, 7
        lea ebx, [ebx + edx + 1]
        sub edi, 64h
        dec esi
        ; Exact mapped bytes 75 C1: jne 0x100f0ec3
        __asm _emit 0x75
        __asm _emit 0xc1
        mov ebp, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 20h]
        xor eax, eax
        mov al, byte ptr [ecx + ebp + 0be8h]
        lea edx, [eax + ebx]
        cmp edx, 5
        ; Exact mapped bytes 7E 07: jle 0x100f0f22
        __asm _emit 0x7e
        __asm _emit 0x07
        mov ebx, 5
        sub ebx, eax
        mov dl, byte ptr [ecx + ebp + 0be8h]
        add dl, bl
        mov al, dl
        mov byte ptr [ecx + ebp + 0be8h], dl
        cmp al, 5
        ; Exact mapped bytes 76 08: jbe 0x100f0f40
        __asm _emit 0x76
        __asm _emit 0x08
        mov byte ptr [ecx + ebp + 0be8h], 5
        mov esi, dword ptr [esp + 10h]
        push ebx
        add esi, ebx
        push ebp
        mov dword ptr [esp + 18h], esi
        ; Exact mapped bytes E8 3F FD FF FF: call 0x100f0c90
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 1D F4 56 1C 10: mov ebx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [esp + 14h]
        mov edi, dword ptr [esp + 18h]
        add eax, 64h
        inc ebp
        add edi, 1ch
        cmp eax, 0c80h
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C AD FE FF FF: jl 0x100f0e2e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 20h]
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 75 61: jne 0x100f0ff0
        __asm _emit 0x75
        __asm _emit 0x61
        test esi, esi
        ; Exact mapped bytes 7E 5D: jle 0x100f0ff0
        __asm _emit 0x7e
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 2cch]
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x100f0ff0
        __asm _emit 0x74
        __asm _emit 0x4d
        push esi
        lea eax, [esp + 28h]
        push 101ac680h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        add esp, 0ch
        mov ecx, dword ptr [ecx + 2cch]
        push 9fh
        push 0
        push 1017f088h
        ; Exact mapped bytes E8 5C 81 F3 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes A1 1C 57 1C 10: mov eax, dword ptr [0x101c571c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 10101h
        lea edx, [esp + 28h]
        push 1
        mov ecx, dword ptr [eax + 2cch]
        push edx
        ; Exact mapped bytes E8 40 81 F3 FF: call 0x10029130
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x81
        __asm _emit 0xf3
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 114h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
