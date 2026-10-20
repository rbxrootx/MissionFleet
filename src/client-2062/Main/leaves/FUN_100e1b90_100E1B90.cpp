// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E1B90 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_100e1b90_100E1B90() {
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 2
        ; Exact mapped bytes 74 55: je 0x100e1bf0
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x100e1bc7
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x100e1bbf
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax]
        push esi
        mov ecx, eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0A: je 0x100e1bc7
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes EB EA: jmp 0x100e1ba9
        __asm _emit 0xeb
        __asm _emit 0xea
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        sub eax, 201h
        ; Exact mapped bytes 74 28: je 0x100e1bf9
        __asm _emit 0x74
        __asm _emit 0x28
        sub eax, 9
        ; Exact mapped bytes 75 1A: jne 0x100e1bf0
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 8]
        xor eax, eax
        shr edx, 10h
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 7E 05: jle 0x100e1be8
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 B0 FD FF FF: call 0x100e19a0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 6ch]
        ; Exact mapped bytes 8B 1D D4 92 1C 10: mov ebx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov esi, dword ptr [eax + 14h]
        mov edx, dword ptr [ebx + 4]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C DF: jl 0x100e1bf0
        __asm _emit 0x7c
        __asm _emit 0xdf
        mov esi, dword ptr [eax + 1ch]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7D D6: jge 0x100e1bf0
        __asm _emit 0x7d
        __asm _emit 0xd6
        mov ecx, dword ptr [eax + 8]
        mov esi, dword ptr [eax + 18h]
        mov edx, dword ptr [ebx + 8]
        add esi, ecx
        cmp edx, esi
        ; Exact mapped bytes 7C C7: jl 0x100e1bf0
        __asm _emit 0x7c
        __asm _emit 0xc7
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7D BE: jge 0x100e1bf0
        __asm _emit 0x7d
        __asm _emit 0xbe
        push ebp
        mov dword ptr [esp + 14h], 0
        lea esi, [edi + 138h]
        mov eax, dword ptr [esi]
        mov edx, dword ptr [ebx + 4]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7C 21: jl 0x100e1c73
        __asm _emit 0x7c
        __asm _emit 0x21
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7D 18: jge 0x100e1c73
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        mov edx, dword ptr [ebx + 8]
        add ebp, ecx
        cmp edx, ebp
        ; Exact mapped bytes 7C 09: jl 0x100e1c73
        __asm _emit 0x7c
        __asm _emit 0x09
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp edx, eax
        ; Exact mapped bytes 7C 13: jl 0x100e1c86
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [esp + 14h]
        add esi, 4
        inc eax
        cmp eax, 2
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7D 3A: jge 0x100e1cbe
        __asm _emit 0x7d
        __asm _emit 0x3a
        ; Exact mapped bytes EB BB: jmp 0x100e1c41
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov ecx, dword ptr [edi + 13ch]
        mov edx, dword ptr [ebx + 8]
        push edx
        mov eax, dword ptr [ecx + 4]
        add eax, 0ah
        push eax
        ; Exact mapped bytes E8 E4 29 02 00: call 0x10104680
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 13ch]
        ; Exact mapped bytes E8 E9 21 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 138h]
        push eax
        ; Exact mapped bytes E8 9D 2A 02 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 13ch]
        ; Exact mapped bytes E8 D2 21 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
