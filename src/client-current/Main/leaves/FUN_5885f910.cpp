// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885F910 .. +0x150 bytes.
extern "C" __declspec(naked) void FUN_5885f910() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov eax, ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + edx*4 + 5d0h], ecx
        mov ecx, edx
        imul ecx, ecx, 0d4h
        mov dword ptr [eax + edx*4 + 148h], 1
        push ebx
        lea ebx, [ecx + eax]
        push ebp
        mov ebp, dword ptr [esp + 18h]
        push esi
        push edi
        lea edi, [ebx + 1ach]
        mov ecx, 35h
        mov esi, ebp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        movzx ecx, word ptr [ebx + 25ch]
        mov dword ptr [eax + edx*4 + 134h], ecx
        mov ecx, dword ptr [eax + 728h]
        mov esi, 2
        ; Exact mapped bytes 66 09 71 24: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 72ch]
        ; Exact mapped bytes 66 09 71 24: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 734h]
        ; Exact mapped bytes 66 09 71 24: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 730h]
        ; Exact mapped bytes 66 09 71 24: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        movzx ecx, word ptr [ebp + 98h]
        ; Exact mapped bytes 8B 35 A0 46 A2 58: mov esi, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 37h
        cmp dword ptr [esi + 160h], ecx
        ; Exact mapped bytes 7E 18: jle 0x5885f9b9
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x5885f9b9
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [esi + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5885f9b9
        __asm _emit 0x74
        __asm _emit 0x0b
        shl ecx, 6
        add ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5885f9bb
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov esi, dword ptr [eax + edx*4 + 6c0h]
        mov dword ptr [esi + 54h], ecx
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x5885f9f1
        __asm _emit 0x74
        __asm _emit 0x28
        mov edi, dword ptr [ecx + 18h]
        mov dword ptr [esi + 0ch], edi
        mov edi, dword ptr [ecx + 1ch]
        add ecx, 20h
        mov dword ptr [esi + 10h], edi
        mov edi, dword ptr [ecx]
        add esi, 14h
        mov dword ptr [esi], edi
        mov edi, dword ptr [ecx + 4]
        mov dword ptr [esi + 4], edi
        mov edi, dword ptr [ecx + 8]
        mov dword ptr [esi + 8], edi
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [esi + 0ch], ecx
        movzx ecx, word ptr [ebp + 98h]
        ; Exact mapped bytes 8B 35 A0 46 A2 58: mov esi, dword ptr [0x58a246a0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xa0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 37h
        cmp dword ptr [esi + 160h], ecx
        ; Exact mapped bytes 7E 18: jle 0x5885fa21
        __asm _emit 0x7e
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 7C 14: jl 0x5885fa21
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [esi + 190h], 0
        ; Exact mapped bytes 74 0B: je 0x5885fa21
        __asm _emit 0x74
        __asm _emit 0x0b
        shl ecx, 6
        add ecx, dword ptr [esi + 190h]
        ; Exact mapped bytes EB 02: jmp 0x5885fa23
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [eax + edx*4 + 6ach]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax + 54h], ecx
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 28: je 0x5885fa5d
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [eax + 0ch], edx
        mov edx, dword ptr [ecx + 1ch]
        add ecx, 20h
        mov dword ptr [eax + 10h], edx
        mov edx, dword ptr [ecx]
        add eax, 14h
        mov dword ptr [eax], edx
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
