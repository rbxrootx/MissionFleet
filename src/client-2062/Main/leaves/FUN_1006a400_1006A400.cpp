// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006A400 .. +0x2DE bytes.
extern "C" __declspec(naked) void FUN_1006a400_1006A400() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 24h
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 104b4h]
        cmp eax, ecx
        ; Exact mapped bytes 75 36: jne 0x1006a45c
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        xor edi, edi
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes 66 8B 88 2C 03 00 00: mov cx, word ptr [eax + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 10510h], edi
        mov dword ptr [esi + 104b4h], ecx
        mov ecx, esi
        mov dword ptr [esi + 10514h], edi
        mov dword ptr [esi + 10524h], edi
        ; Exact mapped bytes E8 D6 51 00 00: call 0x1006f630
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1006a45e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov edx, dword ptr [esi + 1045ch]
        mov eax, 101ace60h
        mov dword ptr [esp + 10h], edx
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 8B 49 30: mov cx, word ptr [ecx + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x49
        __asm _emit 0x30
        test cl, 1
        ; Exact mapped bytes 74 06: je 0x1006a47e
        __asm _emit 0x74
        __asm _emit 0x06
        test cl, 2
        ; Exact mapped bytes 74 01: je 0x1006a47e
        __asm _emit 0x74
        __asm _emit 0x01
        dec edx
        add eax, 4
        cmp eax, 101ace80h
        ; Exact mapped bytes 7C E5: jl 0x1006a46d
        __asm _emit 0x7c
        __asm _emit 0xe5
        ; Exact mapped bytes 66 8B 86 94 05 01 00: mov ax, word ptr [esi + 0x10594]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        xor ebp, ebp
        or ebx, 0ffffffffh
        ; Exact mapped bytes 66 3D 04 00: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 74 2A: je 0x1006a4c8
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 66 3D 05 00: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x1006a4c8
        __asm _emit 0x74
        __asm _emit 0x24
        xor ecx, ecx
        lea edx, [esi + 10894h]
        mov eax, dword ptr [edx]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 74 08: je 0x1006a4bd
        __asm _emit 0x74
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 7D 04: jge 0x1006a4bd
        __asm _emit 0x7d
        __asm _emit 0x04
        mov edi, eax
        mov ebx, ecx
        inc ecx
        add edx, 4
        cmp ecx, 8
        ; Exact mapped bytes 7C E6: jl 0x1006a4ac
        __asm _emit 0x7c
        __asm _emit 0xe6
        ; Exact mapped bytes EB 63: jmp 0x1006a52b
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, 8
        xor eax, eax
        lea edi, [esp + 14h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov edi, dword ptr [edx + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x1006a504
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, edi
        ; Exact mapped bytes E8 E7 40 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x40
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1006a4fd
        __asm _emit 0x74
        __asm _emit 0x10
        xor eax, eax
        mov al, byte ptr [edi + 330h]
        mov dword ptr [esp + eax*4 + 14h], 1
        mov edi, dword ptr [edi + 78h]
        test edi, edi
        ; Exact mapped bytes 75 DE: jne 0x1006a4e2
        __asm _emit 0x75
        __asm _emit 0xde
        xor eax, eax
        lea edi, [esp + 14h]
        lea edx, [esi + 1090ch]
        mov ecx, dword ptr [edx]
        cmp ecx, ebp
        ; Exact mapped bytes 76 09: jbe 0x1006a51f
        __asm _emit 0x76
        __asm _emit 0x09
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 74 04: je 0x1006a51f
        __asm _emit 0x74
        __asm _emit 0x04
        mov ebp, ecx
        mov ebx, eax
        inc eax
        add edi, 4
        add edx, 4
        cmp eax, 8
        ; Exact mapped bytes 7C E5: jl 0x1006a510
        __asm _emit 0x7c
        __asm _emit 0xe5
        mov ebp, dword ptr [esp + 38h]
        xor eax, eax
        mov al, byte ptr [ebp + 330h]
        mov ecx, dword ptr [eax*4 + 101ace60h]
        mov edx, dword ptr [ecx + 2ch]
        mov ecx, dword ptr [esi + 10a60h]
        push edx
        push eax
        ; Exact mapped bytes E8 A2 60 06 00: call 0x100d05f0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        mov al, byte ptr [esi + 20bc4h]
        test al, al
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x1006a5e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ebp, dword ptr [eax + 4]
        ; Exact mapped bytes 75 31: jne 0x1006a597
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [esi + 10464h]
        push 1
        and ecx, 0fffff00h
        or ecx, 20000020h
        mov dword ptr [esi + 10464h], ecx
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 05 44 03 00: call 0x1009e990
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [esi + 10a28h]
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edi, dword ptr [esi + 20c40h]
        mov eax, dword ptr [esi + 20c38h]
        mov ebx, dword ptr [esi + 20c3ch]
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        sub edi, eax
        ; Exact mapped bytes 66 8B 85 2C 03 00 00: mov ax, word ptr [ebp + 0x32c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffffh
        add edi, ebx
        push eax
        ; Exact mapped bytes E8 0B 1C FC FF: call 0x1002c1d0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x1c
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0ecch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 01 01 00 00: jne 0x1006a6d4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 0ecch], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x1006a610
        __asm _emit 0x74
        __asm _emit 0x20
        xor ecx, ecx
        mov cl, byte ptr [eax + 330h]
        cmp ebx, ecx
        ; Exact mapped bytes 75 14: jne 0x1006a610
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [esi + 10464h]
        and dl, 10h
        or edx, 10h
        mov dword ptr [esi + 10464h], edx
        ; Exact mapped bytes EB 10: jmp 0x1006a620
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [esi + 10464h]
        and al, 20h
        or al, 20h
        mov dword ptr [esi + 10464h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx + 4]
        cmp ebp, ecx
        ; Exact mapped bytes 75 79: jne 0x1006a6aa
        __asm _emit 0x75
        __asm _emit 0x79
        cmp eax, 1
        ; Exact mapped bytes 75 1A: jne 0x1006a650
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [esi + 10464h]
        and edx, 0fffffffh
        or edx, 20000000h
        mov dword ptr [esi + 10464h], edx
        ; Exact mapped bytes EB 37: jmp 0x1006a687
        __asm _emit 0xeb
        __asm _emit 0x37
        mov eax, dword ptr [esi + 10464h]
        and eax, 10000000h
        cmp eax, 10000000h
        ; Exact mapped bytes 75 25: jne 0x1006a687
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [esi + 21714h]
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x1006a687
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [esp + 40h]
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x1006a687
        __asm _emit 0x74
        __asm _emit 0x13
        ; Exact mapped bytes 8B 0D 24 57 1C 10: mov ecx, dword ptr [0x101c5724]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 0
        push 0
        push 1
        ; Exact mapped bytes E8 D9 60 FB FF: call 0x10020760
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 FC 42 03 00: call 0x1009e990
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, dword ptr [esi + 10a28h]
        pop edi
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 25: jne 0x1006a6d4
        __asm _emit 0x75
        __asm _emit 0x25
        test ecx, ecx
        ; Exact mapped bytes 74 21: je 0x1006a6d4
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes E8 18 3F 08 00: call 0x100ee5d0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x3f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x1006a6d4
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 10464h]
        and ecx, 0fffffffh
        or ecx, 20000000h
        mov dword ptr [esi + 10464h], ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 24h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
