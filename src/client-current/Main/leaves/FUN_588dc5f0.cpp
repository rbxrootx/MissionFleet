// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588DC5F0 .. +0x23E bytes.
extern "C" __declspec(naked) void FUN_588dc5f0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push ebp
        mov ebp, dword ptr [esp + 14h]
        mov edx, dword ptr [ebp]
        push esi
        push edi
        xor edi, edi
        test edx, edx
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x588dc6a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        shl eax, 5
        mov esi, dword ptr [eax + ecx + 47ch]
        add eax, ecx
        xor esi, 0aah
        and esi, 3ffh
        cmp esi, edx
        mov esi, dword ptr [eax + 47ch]
        ; Exact mapped bytes 7C 22: jl 0x588dc651
        __asm _emit 0x7c
        __asm _emit 0x22
        xor esi, 0aah
        sub esi, edx
        xor esi, dword ptr [eax + 47ch]
        xor esi, 0aah
        and esi, 3ffh
        xor dword ptr [eax + 47ch], esi
        ; Exact mapped bytes EB 3D: jmp 0x588dc68e
        __asm _emit 0xeb
        __asm _emit 0x3d
        xor esi, 0aah
        and esi, 3ffh
        sub edx, esi
        add dword ptr [ebx], edx
        mov edx, dword ptr [eax + 47ch]
        xor edx, 0aah
        and edx, 3ffh
        mov dword ptr [ebp], edx
        mov edx, dword ptr [eax + 47ch]
        and edx, 0fffffcaah
        or edx, 0aah
        mov dword ptr [eax + 47ch], edx
        mov edx, dword ptr [eax + 47ch]
        xor edx, dword ptr [eax + 87ch]
        and edx, 3ffh
        xor dword ptr [eax + 87ch], edx
        mov esi, dword ptr [ebx]
        test esi, esi
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x588dc800
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 9C 45 A2 58: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 10490h]
        add eax, dword ptr [edx + 10488h]
        xor edx, edx
        sub eax, dword ptr [ebp]
        lea ebp, [esi + esi + 1]
        add eax, esi
        ; Exact mapped bytes F7 35 14 49 A2 58: div dword ptr [0x58a24914]
        __asm _emit 0xf7
        __asm _emit 0x35
        __asm _emit 0x14
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes A1 1C 49 A2 58: mov eax, dword ptr [0x58a2491c]
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0x49
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + edx*4]
        xor edx, edx
        div ebp
        cmp edx, esi
        ; Exact mapped bytes 7C 04: jl 0x588dc6e7
        __asm _emit 0x7c
        __asm _emit 0x04
        mov edx, esi
        ; Exact mapped bytes EB 06: jmp 0x588dc6ed
        __asm _emit 0xeb
        __asm _emit 0x06
        sub esi, edx
        mov edi, esi
        mov dword ptr [ebx], edx
        mov eax, dword ptr [esp + 14h]
        shl eax, 5
        mov esi, dword ptr [eax + ecx + 47ch]
        add eax, ecx
        xor esi, 2a800h
        shr esi, 0ah
        and esi, 3ffh
        cmp esi, edx
        mov esi, dword ptr [eax + 47ch]
        ; Exact mapped bytes 7C 28: jl 0x588dc73e
        __asm _emit 0x7c
        __asm _emit 0x28
        xor esi, 2a800h
        shr esi, 0ah
        sub esi, edx
        shl esi, 0ah
        xor esi, dword ptr [eax + 47ch]
        xor esi, 2a800h
        and esi, 0ffc00h
        xor dword ptr [eax + 47ch], esi
        ; Exact mapped bytes EB 2D: jmp 0x588dc76b
        __asm _emit 0xeb
        __asm _emit 0x2d
        xor esi, 2a800h
        shr esi, 0ah
        and esi, 3ffh
        sub edx, esi
        add edi, edx
        mov dword ptr [ebx], esi
        mov edx, dword ptr [eax + 47ch]
        and edx, 0fff2abffh
        or edx, 2a800h
        mov dword ptr [eax + 47ch], edx
        mov edx, dword ptr [eax + 87ch]
        xor edx, dword ptr [eax + 47ch]
        and edx, 0ffc00h
        xor dword ptr [eax + 87ch], edx
        test edi, edi
        ; Exact mapped bytes 74 79: je 0x588dc800
        __asm _emit 0x74
        __asm _emit 0x79
        mov edx, dword ptr [eax + 47ch]
        xor edx, 0aa00000h
        shr edx, 14h
        and edx, 3ffh
        cmp edx, edi
        ; Exact mapped bytes 7C 2E: jl 0x588dc7ce
        __asm _emit 0x7c
        __asm _emit 0x2e
        mov edx, dword ptr [eax + 47ch]
        xor edx, 0aa00000h
        shr edx, 14h
        sub edx, edi
        shl edx, 14h
        xor edx, dword ptr [eax + 47ch]
        xor edx, 0aa00000h
        and edx, 3ff00000h
        xor dword ptr [eax + 47ch], edx
        ; Exact mapped bytes EB 1A: jmp 0x588dc7e8
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edi, edx
        mov edx, dword ptr [eax + 47ch]
        and edx, 0caafffffh
        or edx, 0aa00000h
        mov dword ptr [eax + 47ch], edx
        mov edx, dword ptr [eax + 87ch]
        xor edx, dword ptr [eax + 47ch]
        and edx, 3ff00000h
        xor dword ptr [eax + 87ch], edx
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 4], ecx
        ; Exact mapped bytes 75 1B: jne 0x588dc825
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 14h]
        mov edx, 1
        mov dword ptr [eax + 3ach], edx
        mov dword ptr [eax + ecx*4 + 3b0h], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
