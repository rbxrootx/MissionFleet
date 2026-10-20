// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C2220 .. +0x2E4 bytes.
extern "C" __declspec(naked) void FUN_100c2220_100C2220() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov al, byte ptr [ebp + 0b75h]
        cmp eax, 7
        ; Exact mapped bytes 0F 87 C8 02 00 00: ja 0x100c24ff
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xc8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 04 25 0C 10: jmp dword ptr [eax*4 + 0x100c2504]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x25
        __asm _emit 0x0c
        __asm _emit 0x10
        mov ebx, 0fffff593h
        lea esi, [ebp + 0a74h]
        mov edi, 1c0h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2270
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2270
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2270
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c2272
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c22a3
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
        push 3ah
        push 203h
        ; Exact mapped bytes E8 1F CA 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xca
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 3c0h
        ; Exact mapped bytes 7C 88: jl 0x100c2250
        __asm _emit 0x7c
        __asm _emit 0x88
        mov ebx, 0fffff69ch
        lea esi, [ebp + 974h]
        mov edi, 400h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c22fa
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c22fa
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c22fa
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c22fc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c232d
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
        push 3ah
        push 0d5h
        ; Exact mapped bytes E8 95 C9 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 600h
        ; Exact mapped bytes 7C 88: jl 0x100c22da
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff69dh
        lea esi, [ebp + 974h]
        mov edi, 440h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2389
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2389
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2389
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c238b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c23bc
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
        push 6ch
        push 2a0h
        ; Exact mapped bytes E8 06 C9 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc9
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 640h
        ; Exact mapped bytes 7C 88: jl 0x100c2369
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff595h
        lea esi, [ebp + 0a74h]
        mov edi, 240h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c2418
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c2418
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c2418
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c241a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c244b
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
        push 1ah
        push 2d0h
        ; Exact mapped bytes E8 77 C8 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc8
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 440h
        ; Exact mapped bytes 7C 88: jl 0x100c23f8
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff595h
        lea esi, [ebp + 0a74h]
        mov edi, 240h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c24a7
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c24a7
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c24a7
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c24a9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c24da
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
        push 1ah
        push 2d0h
        ; Exact mapped bytes E8 E8 C7 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 440h
        ; Exact mapped bytes 7C 88: jl 0x100c2487
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
