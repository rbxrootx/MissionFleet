// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884A272 .. +0x25E bytes.
extern "C" __declspec(naked) void FUN_5884a272_5884A272() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        xor ebx, ebx
        mov dword ptr [esi + 1af50h], eax
        mov dword ptr [esi + 1af48h], ebx
        mov dword ptr [esi + 1af44h], ebx
        mov dword ptr [esi + 1af4ch], ebx
        ; Exact mapped bytes 66 39 9E 7E 0E 00 00: cmp word ptr [esi + 0xe7e], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0x7e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 85 25 02 00 00: jne 0x5884a4ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 1e40h]
        mov edx, ebx
        push edi
        mov edi, ebx
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [eax], edi
        xor eax, eax
        mov ecx, dword ptr [edx*4 + 588c1e10h]
        inc eax
        shl eax, cl
        mov dword ptr [ebp - 4], ebx
        test eax, eax
        ; Exact mapped bytes 7E 1B: jle 0x5884a2e3
        __asm _emit 0x7e
        __asm _emit 0x1b
        xor eax, eax
        mov byte ptr [esi + edi + 1b3dh], dl
        mov ecx, dword ptr [edx*4 + 588c1e10h]
        inc eax
        inc edi
        shl eax, cl
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 7C E7: jl 0x5884a2c8
        __asm _emit 0x7c
        __asm _emit 0xe7
        xor ebx, ebx
        mov eax, dword ptr [ebp + 0ch]
        inc edx
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        cmp edx, 1ch
        ; Exact mapped bytes 7C C1: jl 0x5884a2b3
        __asm _emit 0x7c
        __asm _emit 0xc1
        cmp edi, 100h
        mov dword ptr [ebp + 0ch], edx
        push 588c23b8h
        sete al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 83 F2 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        add esp, 0ch
        mov byte ptr [edi + esi + 1b3ch], al
        mov edx, ebx
        lea eax, [esi + 1eb4h]
        mov edi, ebx
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [eax], edi
        xor eax, eax
        mov ecx, dword ptr [edx*4 + 588c1e88h]
        inc eax
        shl eax, cl
        mov dword ptr [ebp - 4], ebx
        test eax, eax
        ; Exact mapped bytes 7E 1B: jle 0x5884a357
        __asm _emit 0x7e
        __asm _emit 0x1b
        xor eax, eax
        mov byte ptr [esi + edi + 1c3dh], dl
        mov ecx, dword ptr [edx*4 + 588c1e88h]
        inc eax
        inc edi
        shl eax, cl
        inc ebx
        cmp ebx, eax
        ; Exact mapped bytes 7C E7: jl 0x5884a33c
        __asm _emit 0x7c
        __asm _emit 0xe7
        xor ebx, ebx
        mov eax, dword ptr [ebp + 0ch]
        inc edx
        add eax, 4
        mov dword ptr [ebp + 0ch], eax
        cmp edx, 10h
        ; Exact mapped bytes 7C C1: jl 0x5884a327
        __asm _emit 0x7c
        __asm _emit 0xc1
        cmp edi, 100h
        mov dword ptr [ebp + 0ch], edx
        push 588c23d0h
        sete al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 0F F2 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add esp, 0ch
        sar edi, 7
        cmp edx, 1eh
        ; Exact mapped bytes 7D 5A: jge 0x5884a3e9
        __asm _emit 0x7d
        __asm _emit 0x5a
        lea ecx, [edx + 7adh]
        lea ecx, [esi + ecx*4]
        mov dword ptr [ebp + 0ch], ecx
        mov eax, edi
        mov dword ptr [ebp - 4], ebx
        shl eax, 7
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [edx*4 + 588c1e88h]
        push 7
        pop eax
        sub ecx, eax
        xor eax, eax
        inc eax
        shl eax, cl
        test eax, eax
        ; Exact mapped bytes 7E 20: jle 0x5884a3da
        __asm _emit 0x7e
        __asm _emit 0x20
        mov byte ptr [esi + edi + 1d3dh], dl
        inc edi
        mov ecx, dword ptr [edx*4 + 588c1e88h]
        inc ebx
        push 7
        pop eax
        sub ecx, eax
        xor eax, eax
        inc eax
        shl eax, cl
        cmp ebx, eax
        ; Exact mapped bytes 7C E2: jl 0x5884a3ba
        __asm _emit 0x7c
        __asm _emit 0xe2
        xor ebx, ebx
        mov ecx, dword ptr [ebp + 0ch]
        inc edx
        add ecx, 4
        mov dword ptr [ebp + 0ch], ecx
        cmp edx, 1eh
        ; Exact mapped bytes 7C B2: jl 0x5884a39b
        __asm _emit 0x7c
        __asm _emit 0xb2
        cmp edi, 100h
        push 588c23e8h
        sete al
        movzx eax, al
        push eax
        push esi
        ; Exact mapped bytes E8 8F F1 FF FF: call 0x58849590
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea edi, [esi + 0fe4h]
        xor eax, eax
        push 8
        pop edx
        mov ecx, edx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        push 4
        lea eax, [esi + 9feh]
        mov ecx, 90h
        pop edi
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, edi
        ; Exact mapped bytes 66 FF 86 F4 0F 00 00: inc word ptr [esi + 0xff4]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 75 EF: jne 0x5884a421
        __asm _emit 0x75
        __asm _emit 0xef
        push 70h
        lea eax, [esi + 0c3eh]
        pop ecx
        push 9
        pop edx
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, edi
        ; Exact mapped bytes 66 FF 86 F6 0F 00 00: inc word ptr [esi + 0xff6]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xf6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 75 EC: jne 0x5884a43b
        __asm _emit 0x75
        __asm _emit 0xec
        push 18h
        pop ecx
        push 7
        lea eax, [esi + 0dfeh]
        pop edx
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, edi
        ; Exact mapped bytes 66 FF 86 F2 0F 00 00: inc word ptr [esi + 0xff2]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 75 EF: jne 0x5884a45b
        __asm _emit 0x75
        __asm _emit 0xef
        push 8
        pop edx
        lea eax, [esi + 0e5eh]
        mov ecx, edx
        ; Exact mapped bytes 66 89 10: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        add eax, edi
        ; Exact mapped bytes 66 FF 86 F4 0F 00 00: inc word ptr [esi + 0xff4]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xf4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 75 EF: jne 0x5884a477
        __asm _emit 0x75
        __asm _emit 0xef
        push 11fh
        lea eax, [esi + 9fch]
        push eax
        push esi
        ; Exact mapped bytes E8 D4 0C 00 00: call 0x5884b16e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edi, [esi + 0e7ch]
        push 5
        pop esi
        push esi
        push ebx
        ; Exact mapped bytes 66 89 77 02: mov word ptr [edi + 2], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x02
        ; Exact mapped bytes E8 EC F6 FF FF: call 0x58849b9d
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        inc ebx
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        lea edi, [edi + 4]
        pop ecx
        pop ecx
        cmp ebx, 1eh
        ; Exact mapped bytes 7C E7: jl 0x5884a4a6
        __asm _emit 0x7c
        __asm _emit 0xe7
        mov esi, dword ptr [ebp + 8]
        push esi
        ; Exact mapped bytes E8 5F 0E 00 00: call 0x5884b327
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
