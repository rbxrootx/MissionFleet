// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041AB5E .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_0041ab5e_0041AB5E() {
    __asm {
        mov eax, 43ae93h
        ; Exact mapped bytes E8 A0 4A 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 14h
        push ebx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [esi], 43ef78h
        xor ebx, ebx
        cmp dword ptr [esi + 58h], ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 52: je 0x41abd4
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [esi + 50h]
        cmp eax, ebx
        ; Exact mapped bytes 74 4B: je 0x41abd4
        __asm _emit 0x74
        __asm _emit 0x4b
        mov eax, dword ptr [eax]
        lea edx, [ebp - 18h]
        push edx
        push 440418h
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 37: jl 0x41abd4
        __asm _emit 0x7c
        __asm _emit 0x37
        mov eax, dword ptr [ebp - 18h]
        lea edx, [ebp - 10h]
        mov dword ptr [ebp - 10h], ebx
        push edx
        mov ecx, dword ptr [eax]
        push 4402e8h
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x41abcb
        __asm _emit 0x7c
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        push dword ptr [esi + 58h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push edi
        cmp dword ptr [esi + 24h], ebx
        ; Exact mapped bytes 74 1E: je 0x41abf8
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [esi + 1ch]
        push ebx
        mov edi, dword ptr [eax + 8]
        mov ecx, dword ptr [edi]
        push dword ptr [edi + 8]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 90 B8 00 00 00: call dword ptr [eax + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov dword ptr [eax + 90h], ebx
        ; Exact mapped bytes EB DD: jmp 0x41abd5
        __asm _emit 0xeb
        __asm _emit 0xdd
        lea ecx, [esi + 18h]
        mov dword ptr [ebp - 1ch], ecx
        ; Exact mapped bytes E8 75 26 01 00: call 0x42d278
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [esi + 40h], ebx
        ; Exact mapped bytes 74 35: je 0x41ac3d
        __asm _emit 0x74
        __asm _emit 0x35
        xor edi, edi
        cmp dword ptr [esi + 38h], ebx
        ; Exact mapped bytes 7E 1A: jle 0x41ac29
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov eax, ebx
        add eax, dword ptr [esi + 40h]
        push eax
        ; Exact mapped bytes FF 15 48 C3 43 00: call dword ptr [0x43c348]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        inc edi
        add ebx, 10h
        cmp edi, dword ptr [esi + 38h]
        ; Exact mapped bytes 7C EB: jl 0x41ac0f
        __asm _emit 0x7c
        __asm _emit 0xeb
        xor ebx, ebx
        cmp dword ptr [esi + 38h], ebx
        ; Exact mapped bytes 74 12: je 0x41ac3d
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [esi + 3ch]
        ; Exact mapped bytes E8 E2 2C 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        push dword ptr [esi + 40h]
        ; Exact mapped bytes E8 DA 2C 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, dword ptr [esi + 8]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x41ac4a
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [esi + 0ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x41ac57
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [esi + 14h], ebx
        ; Exact mapped bytes 74 5C: je 0x41acb8
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [esi + 10h], ebx
        mov dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 7E 4B: jle 0x41acaf
        __asm _emit 0x7e
        __asm _emit 0x4b
        xor edi, edi
        mov eax, dword ptr [esi + 14h]
        mov eax, dword ptr [eax + edi + 24h]
        mov eax, dword ptr [eax + 4]
        cmp eax, ebx
        ; Exact mapped bytes 74 0F: je 0x41ac83
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, eax
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ecx + 8]
        mov dword ptr [ecx + 90h], ebx
        ; Exact mapped bytes EB ED: jmp 0x41ac70
        __asm _emit 0xeb
        __asm _emit 0xed
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [eax + edi + 24h]
        ; Exact mapped bytes E8 E9 25 01 00: call 0x42d278
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [eax + edi + 24h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 07: je 0x41aca1
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        inc dword ptr [ebp - 14h]
        add edi, 28h
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [esi + 10h]
        ; Exact mapped bytes 7C B7: jl 0x41ac66
        __asm _emit 0x7c
        __asm _emit 0xb7
        push dword ptr [esi + 14h]
        ; Exact mapped bytes FF 15 10 C6 43 00: call dword ptr [0x43c610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x41acc6
        __asm _emit 0x74
        __asm _emit 0x07
        push eax
        ; Exact mapped bytes FF 15 10 C6 43 00: call dword ptr [0x43c610]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 12: je 0x41acdf
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [esi + 50h]
        push dword ptr [eax]
        ; Exact mapped bytes E8 67 00 00 00: call 0x41ad3e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 54h]
        ; Exact mapped bytes E8 80 01 00 00: call 0x41ae5f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 54h]
        cmp edi, ebx
        ; Exact mapped bytes 74 0E: je 0x41acf4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 72 01 00 00: call 0x41ae5f
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 22 2C 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov edi, dword ptr [esi + 50h]
        cmp edi, ebx
        ; Exact mapped bytes 74 0E: je 0x41ad09
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, edi
        ; Exact mapped bytes E8 C3 00 00 00: call 0x41adc5
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 0D 2C 01 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [esi + 4ch]
        pop edi
        cmp eax, ebx
        ; Exact mapped bytes 74 06: je 0x41ad17
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov esi, dword ptr [esi + 48h]
        cmp esi, ebx
        ; Exact mapped bytes 74 06: je 0x41ad24
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [esi]
        push esi
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 68 25 01 00: call 0x42d298
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
