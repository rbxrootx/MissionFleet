// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009F750 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_1009f750_1009F750() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, ecx
        mov ecx, dword ptr [esp + 8]
        push ebx
        mov dword ptr [edx + eax*4 + 818h], ecx
        lea ecx, [eax + eax*2]
        push esi
        mov esi, dword ptr [esp + 18h]
        lea ecx, [ecx + ecx*8]
        push edi
        shl ecx, 1
        sub ecx, eax
        mov dword ptr [edx + eax*4 + 118h], 1
        lea ebx, [edx + ecx*4]
        mov ecx, 35h
        lea edi, [ebx + 178h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 8B 28 02 00 00: mov cx, word ptr [ebx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8b
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [edx + eax*4 + 0f8h], ecx
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 7C 01 00 00: mov ax, word ptr [ebx + 0x17c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ecx + 160h]
        add eax, 5
        cmp esi, eax
        ; Exact mapped bytes 7E 15: jle 0x1009f7ce
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1009f7ce
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1009f7ce
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1009f7d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [edx + 914h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1009f805
        __asm _emit 0x74
        __asm _emit 0x28
        mov esi, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], esi
        mov esi, dword ptr [eax - 4]
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
        ; Exact mapped bytes 8B 0D 58 57 1C 10: mov ecx, dword ptr [0x101c5758]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 83 7C 01 00 00: mov ax, word ptr [ebx + 0x17c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov esi, dword ptr [ecx + 160h]
        add eax, 5
        cmp esi, eax
        pop esi
        pop ebx
        ; Exact mapped bytes 7E 15: jle 0x1009f839
        __asm _emit 0x7e
        __asm _emit 0x15
        test eax, eax
        ; Exact mapped bytes 7C 11: jl 0x1009f839
        __asm _emit 0x7c
        __asm _emit 0x11
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x1009f839
        __asm _emit 0x74
        __asm _emit 0x07
        shl eax, 6
        add eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x1009f83b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [edx + 918h]
        test eax, eax
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1009f870
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [edx + 10h], ecx
        mov ecx, dword ptr [eax]
        add edx, 14h
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
