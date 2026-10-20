// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584EF2D0 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_584ef2d0_584EF2D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D 06 00 00: call 0x584ef970
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584ef2f1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A5 01 00 00: jmp 0x584ef496
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D B8 BF 90 58 00: cmp dword ptr [0x5890bfb8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 27: jne 0x584ef321
        __asm _emit 0x75
        __asm _emit 0x27
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 E4 3F 2C 00: call 0x587b3300
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3f
        __asm _emit 0x2c
        __asm _emit 0x00
        ; Exact mapped bytes A3 B8 BF 90 58: mov dword ptr [0x5890bfb8], eax
        __asm _emit 0xa3
        __asm _emit 0xb8
        __asm _emit 0xbf
        __asm _emit 0x90
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 F0 9D 36 00: call 0x58859121
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9d
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 10000h
        ; Exact mapped bytes 74 20: je 0x584ef362
        __asm _emit 0x74
        __asm _emit 0x20
        push 588a2550h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 12 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 14 01 00 00: jmp 0x584ef476
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 20000h
        ; Exact mapped bytes 74 20: je 0x584ef390
        __asm _emit 0x74
        __asm _emit 0x20
        push 588a2554h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 12 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 E6 00 00 00: jmp 0x584ef476
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 80000h
        ; Exact mapped bytes 74 20: je 0x584ef3bd
        __asm _emit 0x74
        __asm _emit 0x20
        push 588a255ch
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 54 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 11 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x584ef476
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 100000h
        ; Exact mapped bytes 74 20: je 0x584ef3eb
        __asm _emit 0x74
        __asm _emit 0x20
        push 588a2564h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 05 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 11 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x584ef476
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 200000h
        ; Exact mapped bytes 74 1D: je 0x584ef416
        __asm _emit 0x74
        __asm _emit 0x1d
        push 588a256ch
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 04 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F 11 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 60: jmp 0x584ef476
        __asm _emit 0xeb
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        and eax, 40000h
        ; Exact mapped bytes 74 1D: je 0x584ef440
        __asm _emit 0x74
        __asm _emit 0x1d
        push 588a2574h
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 04 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 11 00 00: call 0x584f05b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 36: jmp 0x584ef476
        __asm _emit 0xeb
        __asm _emit 0x36
        mov dword ptr [ebp - 28h], 5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        sub esp, 1ch
        mov ecx, 7
        lea esi, [ebp - 2ch]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        xor eax, eax
        ; Exact mapped bytes EB 20: jmp 0x584ef496
        __asm _emit 0xeb
        __asm _emit 0x20
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 0F 00 00: call 0x584f0410
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 76 04 00 00: call 0x584ef900
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 91 9C 36 00: call 0x58859121
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9c
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
