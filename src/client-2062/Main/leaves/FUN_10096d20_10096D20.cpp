// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10096D20 .. +0x1FA bytes.
extern "C" __declspec(naked) void FUN_10096d20_10096D20() {
    __asm {
        push -1
        push 10170bc9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 30h]
        push edi
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebx
        push ebp
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 4B 7C 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x7c
        __asm _emit 0x06
        __asm _emit 0x00
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [esi], 10175f28h
        ; Exact mapped bytes 66 C7 46 6C 4C 04: mov word ptr [esi + 0x6c], 0x44c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x6c
        __asm _emit 0x4c
        __asm _emit 0x04
        ; Exact mapped bytes 66 C7 46 6E 7E 04: mov word ptr [esi + 0x6e], 0x47e
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x6e
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 66 C7 46 70 74 04: mov word ptr [esi + 0x70], 0x474
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes E8 14 5A 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 38h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 79: je 0x10096e17
        __asm _emit 0x74
        __asm _emit 0x79
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 206h
        ; Exact mapped bytes 7E 12: jle 0x10096dc1
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x10096dc1
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 818h]
        ; Exact mapped bytes EB 02: jmp 0x10096dc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        ; Exact mapped bytes 66 8B 46 6C: mov ax, word ptr [esi + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6c
        mov ecx, dword ptr [esp + 28h]
        push eax
        push 0
        push 0
        push ebx
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D6 7B 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10096e11
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x10096e19
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 7ch], edi
        ; Exact mapped bytes E8 78 59 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 28h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 2A: je 0x10096e64
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 8B 46 6C: mov ax, word ptr [esi + 0x6c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6c
        lea ecx, [ebx + 0ch]
        ; Exact mapped bytes 66 40: inc ax
        __asm _emit 0x66
        __asm _emit 0x40
        lea edx, [ebp + 10h]
        push eax
        push 0
        push 0
        push ecx
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 5B 7B 06 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], 0
        ; Exact mapped bytes EB 02: jmp 0x10096e66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 80h], edi
        ; Exact mapped bytes E8 25 59 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 28h], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 38: je 0x10096ec3
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 22h
        ; Exact mapped bytes 7E 12: jle 0x10096eac
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x10096eac
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 880h]
        ; Exact mapped bytes EB 02: jmp 0x10096eae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        add ebx, 4
        add ebp, 6eh
        push ebx
        push ebp
        push 5
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CF 83 06 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10096ec5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 78h], eax
        ; Exact mapped bytes E8 87 82 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x06
        __asm _emit 0x00
        mov edi, dword ptr [esi + 78h]
        ; Exact mapped bytes 66 8B 46 6E: mov ax, word ptr [esi + 0x6e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x6e
        xor ebx, ebx
        mov ecx, dword ptr [edi + 40h]
        ; Exact mapped bytes 66 89 47 26: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10096ef3
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 AD 80 06 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10096f00
        __asm _emit 0x74
        __asm _emit 0x06
        push edi
        ; Exact mapped bytes E8 00 80 06 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 74h], ebx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
