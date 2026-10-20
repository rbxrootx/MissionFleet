// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10016F10 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_10016f10_10016F10() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        mov esi, dword ptr [esp + 8]
        lea edx, [eax + eax*4]
        mov eax, 1b4e81b5h
        shl edx, 1
        mov dword ptr [ecx + 78h], edx
        imul edx
        sar edx, 5
        mov eax, edx
        mov dword ptr [ecx + 0d8h], esi
        shr eax, 1fh
        add edx, eax
        lea eax, [esi + esi*2]
        lea eax, [edx + eax*4]
        ; Exact mapped bytes 8B 15 54 57 1C 10: mov edx, dword ptr [0x101c5754]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x10016f61
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10016f61
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x10016f61
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x10016f63
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0dch]
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10016f98
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ecx + 0d8h]
        mov edx, dword ptr [ecx + 78h]
        add eax, 3
        lea esi, [eax + eax*2]
        mov eax, 1b4e81b5h
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        lea eax, [edx + esi*4]
        ; Exact mapped bytes 8B 15 54 57 1C 10: mov edx, dword ptr [0x101c5754]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 160h], eax
        ; Exact mapped bytes 7E 15: jle 0x10016fde
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x10016fde
        __asm _emit 0x7c
        __asm _emit 0x11
        mov edx, dword ptr [edx + 190h]
        test edx, edx
        ; Exact mapped bytes 74 07: je 0x10016fde
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, edx
        ; Exact mapped bytes EB 02: jmp 0x10016fe0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [ecx + 0e0h]
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x10017015
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], esi
        mov esi, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], esi
        mov esi, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [edx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov edx, dword ptr [ecx + 0e0h]
        add ecx, 14h
        pop esi
        mov dword ptr [edx + 50h], 0
        mov eax, dword ptr [ecx + 0c8h]
        add eax, 14h
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
