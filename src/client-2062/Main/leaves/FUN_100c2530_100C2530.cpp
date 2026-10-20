// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C2530 .. +0x250 bytes.
extern "C" __declspec(naked) void FUN_100c2530_100C2530() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov al, byte ptr [ebp + 0b75h]
        sub eax, 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x100c25dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 2D 02 00 00: jne 0x100c277b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2580
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2580
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2580
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2582
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c25b3
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi]
        push 0e1h
        push 12h
        ; Exact mapped bytes E8 0F C7 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c2560
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff693h
        lea esi, [ebp + 974h]
        mov edi, 1c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c260f
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c260f
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c260f
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2611
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2642
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi]
        push 7dh
        push 298h
        ; Exact mapped bytes E8 80 C6 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 3c0h
        ; Exact mapped bytes 7C 88: jl 0x100c25ef
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebx, 0fffff68ch
        lea esi, [ebp + 97ch]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2699
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2699
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2699
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c269b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c26cc
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi]
        push 9dh
        push 42h
        ; Exact mapped bytes E8 F6 C5 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c2679
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebx, 0fffff684h
        lea esi, [ebp + 984h]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2723
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2723
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2723
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2725
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c2756
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi]
        push 0e1h
        push 12h
        ; Exact mapped bytes E8 6C C5 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xc5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c2703
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
