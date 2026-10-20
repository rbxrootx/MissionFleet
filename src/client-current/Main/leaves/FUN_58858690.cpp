// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858690 .. +0x124 bytes.
extern "C" __declspec(naked) void FUN_58858690() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov edx, ecx
        push ebx
        mov ebx, dword ptr [esp + 8]
        mov ecx, ebx
        imul ecx, ecx, 0d4h
        mov dword ptr [edx + ebx*4 + 878h], eax
        push ebp
        mov ebp, dword ptr [esp + 18h]
        lea eax, [ecx + edx]
        push esi
        mov dword ptr [edx + ebx*4 + 138h], 1
        push edi
        lea edi, [eax + 1d8h]
        mov ecx, 35h
        mov esi, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        movzx eax, word ptr [eax + 288h]
        mov dword ptr [edx + ebx*4 + 118h], eax
        movzx eax, word ptr [ebp + 98h]
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 37h
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x5885870c
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x5885870c
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5885870c
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5885870e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx + ebx*4 + 9e0h]
        mov dword ptr [ecx + 54h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58858744
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], esi
        mov esi, dword ptr [eax + 1ch]
        add eax, 20h
        mov dword ptr [ecx + 10h], esi
        mov esi, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], esi
        mov esi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], esi
        mov esi, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], esi
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx eax, word ptr [ebp + 98h]
        ; Exact mapped bytes 8B 0D A0 46 A2 58: mov ecx, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add eax, 3bh
        cmp dword ptr [ecx + 160h], eax
        ; Exact mapped bytes 7E 18: jle 0x58858774
        __asm _emit 0x7e
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 7C 14: jl 0x58858774
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [ecx + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x58858774
        __asm _emit 0x74
        __asm _emit 0x0b
        shl eax, 6
        add eax, dword ptr [ecx + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58858776
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [edx + ebx*4 + 9c0h]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [edx + 54h], eax
        pop ebx
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x588587b1
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [edx + 10h], ecx
        lea ecx, [edx + 14h]
        mov edx, dword ptr [eax + 20h]
        add eax, 20h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
