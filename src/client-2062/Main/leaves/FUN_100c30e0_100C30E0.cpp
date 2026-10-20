// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C30E0 .. +0x1D0 bytes.
extern "C" __declspec(naked) void FUN_100c30e0_100C30E0() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        xor eax, eax
        push esi
        push edi
        mov al, byte ptr [ebp + 0b75h]
        dec eax
        ; Exact mapped bytes 0F 84 2C 01 00 00: je 0x100c3221
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x100c3192
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 85 A8 01 00 00: jne 0x100c32ab
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, 0fffff594h
        lea esi, [ebp + 0a74h]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [ebx + esi]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c3135
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c3135
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c3135
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c3137
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c3168
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
        push 44h
        push 0d2h
        ; Exact mapped bytes E8 5A BB 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xbb
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c3115
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff594h
        lea esi, [ebp + 0a74h]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c31c4
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c31c4
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c31c4
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c31c6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c31f7
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
        push 39h
        push 0d2h
        ; Exact mapped bytes E8 CB BA 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c31a4
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
        mov ebx, 0fffff594h
        lea esi, [ebp + 0a74h]
        mov edi, 200h
        sub ebx, ebp
        mov eax, dword ptr [ebp + 60h]
        lea ecx, [esi + ebx]
        cmp dword ptr [eax + 160h], ecx
        ; Exact mapped bytes 7E 12: jle 0x100c3253
        __asm _emit 0x7e
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7C 0E: jl 0x100c3253
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x100c3253
        __asm _emit 0x74
        __asm _emit 0x04
        add eax, edi
        ; Exact mapped bytes EB 02: jmp 0x100c3255
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x100c3286
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
        push 2eh
        push 0d2h
        ; Exact mapped bytes E8 3C BA 03 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add edi, 100h
        add esi, 4
        or byte ptr [eax + 24h], 1
        cmp edi, 400h
        ; Exact mapped bytes 7C 88: jl 0x100c3233
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
