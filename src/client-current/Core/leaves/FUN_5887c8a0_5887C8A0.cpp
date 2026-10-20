// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C8A0 .. +0x38A bytes.
extern "C" __declspec(naked) void FUN_5887c8a0_5887C8A0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        wait
        ; Exact mapped bytes D9 7D F8: fnstcw word ptr [ebp - 8]
        __asm _emit 0xd9
        __asm _emit 0x7d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 8B 5D F8: mov bx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xf8
        movzx ecx, bx
        and ecx, 1
        shl ecx, 4
        mov edx, ecx
        or edx, 8
        test bl, 4
        cmove edx, ecx
        mov ecx, edx
        or ecx, 4
        test bl, 8
        cmove ecx, edx
        mov edx, ecx
        or edx, 2
        test bl, 10h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 1
        test bl, 20h
        cmove ecx, edx
        mov esi, ecx
        or esi, 80000h
        test bl, 2
        cmove esi, ecx
        movzx ecx, bx
        mov eax, ecx
        mov edx, esi
        and eax, 0c00h
        cmp eax, 800h
        ; Exact mapped bytes 77 1D: ja 0x5887c926
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 74 13: je 0x5887c91e
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887c933
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 400h
        ; Exact mapped bytes 75 1D: jne 0x5887c933
        __asm _emit 0x75
        __asm _emit 0x1d
        or edx, 100h
        ; Exact mapped bytes EB 15: jmp 0x5887c933
        __asm _emit 0xeb
        __asm _emit 0x15
        or edx, 200h
        ; Exact mapped bytes EB 0D: jmp 0x5887c933
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, 0c00h
        ; Exact mapped bytes 75 06: jne 0x5887c933
        __asm _emit 0x75
        __asm _emit 0x06
        or edx, 300h
        and ecx, 300h
        ; Exact mapped bytes 74 10: je 0x5887c94b
        __asm _emit 0x74
        __asm _emit 0x10
        cmp ecx, 200h
        ; Exact mapped bytes 75 0E: jne 0x5887c951
        __asm _emit 0x75
        __asm _emit 0x0e
        or edx, 10000h
        ; Exact mapped bytes EB 06: jmp 0x5887c951
        __asm _emit 0xeb
        __asm _emit 0x06
        or edx, 20000h
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, edx
        movzx eax, bx
        or ecx, 40000h
        test eax, 1000h
        mov esi, edi
        mov eax, dword ptr [ebp + 8]
        not esi
        cmove ecx, edx
        and eax, edi
        and esi, ecx
        or esi, eax
        cmp esi, ecx
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x5887ca45
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 AE 02 00 00: call 0x5887cc30
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes D9 6D FC: fldcw word ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x6d
        __asm _emit 0xfc
        wait
        ; Exact mapped bytes D9 7D FC: fnstcw word ptr [ebp - 4]
        __asm _emit 0xd9
        __asm _emit 0x7d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 5D FC: mov bx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xfc
        movzx ecx, bx
        and ecx, 1
        movzx esi, bx
        shl ecx, 4
        mov eax, esi
        mov edx, ecx
        or edx, 8
        test bl, 4
        cmove edx, ecx
        mov ecx, edx
        or ecx, 4
        test bl, 8
        cmove ecx, edx
        mov edx, ecx
        or edx, 2
        test bl, 10h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 1
        test bl, 20h
        cmove ecx, edx
        mov edx, ecx
        or edx, 80000h
        test bl, 2
        cmove edx, ecx
        and eax, 0c00h
        mov ecx, edx
        cmp eax, 800h
        ; Exact mapped bytes 77 1D: ja 0x5887ca07
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 74 13: je 0x5887c9ff
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887ca14
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 400h
        ; Exact mapped bytes 75 1D: jne 0x5887ca14
        __asm _emit 0x75
        __asm _emit 0x1d
        or ecx, 100h
        ; Exact mapped bytes EB 15: jmp 0x5887ca14
        __asm _emit 0xeb
        __asm _emit 0x15
        or ecx, 200h
        ; Exact mapped bytes EB 0D: jmp 0x5887ca14
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, 0c00h
        ; Exact mapped bytes 75 06: jne 0x5887ca14
        __asm _emit 0x75
        __asm _emit 0x06
        or ecx, 300h
        and esi, 300h
        ; Exact mapped bytes 74 10: je 0x5887ca2c
        __asm _emit 0x74
        __asm _emit 0x10
        cmp esi, 200h
        ; Exact mapped bytes 75 0E: jne 0x5887ca32
        __asm _emit 0x75
        __asm _emit 0x0e
        or ecx, 10000h
        ; Exact mapped bytes EB 06: jmp 0x5887ca32
        __asm _emit 0xeb
        __asm _emit 0x06
        or ecx, 20000h
        mov esi, ecx
        movzx eax, bx
        or esi, 40000h
        test eax, 1000h
        cmove esi, ecx
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 0F 8C CF 01 00 00: jl 0x5887cc21
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and edi, 308031fh
        mov dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 0F AE 5D F0: stmxcsr dword ptr [ebp - 0x10]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xf0
        mov edi, dword ptr [ebp - 10h]
        mov ecx, edi
        shr ecx, 3
        mov eax, edi
        and ecx, 10h
        mov edx, ecx
        or edx, 8
        test edi, 200h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 4
        test edi, 400h
        cmove ecx, edx
        mov edx, ecx
        or edx, 2
        test edi, 800h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 1
        test edi, 1000h
        cmove ecx, edx
        mov ebx, ecx
        or ebx, 80000h
        test edi, 100h
        cmove ebx, ecx
        and eax, 6000h
        mov edx, ebx
        cmp eax, 4000h
        ; Exact mapped bytes 77 1D: ja 0x5887cae0
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 74 13: je 0x5887cad8
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887caed
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 2000h
        ; Exact mapped bytes 75 1D: jne 0x5887caed
        __asm _emit 0x75
        __asm _emit 0x1d
        or edx, 100h
        ; Exact mapped bytes EB 15: jmp 0x5887caed
        __asm _emit 0xeb
        __asm _emit 0x15
        or edx, 200h
        ; Exact mapped bytes EB 0D: jmp 0x5887caed
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, 6000h
        ; Exact mapped bytes 75 06: jne 0x5887caed
        __asm _emit 0x75
        __asm _emit 0x06
        or edx, 300h
        and edi, 8040h
        sub edi, 40h
        ; Exact mapped bytes 74 1D: je 0x5887cb15
        __asm _emit 0x74
        __asm _emit 0x1d
        sub edi, 7fc0h
        ; Exact mapped bytes 74 0D: je 0x5887cb0d
        __asm _emit 0x74
        __asm _emit 0x0d
        sub edi, 40h
        ; Exact mapped bytes 75 16: jne 0x5887cb1b
        __asm _emit 0x75
        __asm _emit 0x16
        or edx, 1000000h
        ; Exact mapped bytes EB 0E: jmp 0x5887cb1b
        __asm _emit 0xeb
        __asm _emit 0x0e
        or edx, 3000000h
        ; Exact mapped bytes EB 06: jmp 0x5887cb1b
        __asm _emit 0xeb
        __asm _emit 0x06
        or edx, 2000000h
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, ecx
        and ecx, dword ptr [ebp + 8]
        not eax
        and eax, edx
        or eax, ecx
        cmp eax, edx
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x5887cc03
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 79 FB FF FF: call 0x5887c6b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E8 F0 34 FF FF: call 0x58870030
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 0F AE 5D F4: stmxcsr dword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xf4
        mov edi, dword ptr [ebp - 0ch]
        mov ecx, edi
        shr ecx, 3
        mov eax, edi
        and ecx, 10h
        mov edx, ecx
        or edx, 8
        test edi, 200h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 4
        test edi, 400h
        cmove ecx, edx
        mov edx, ecx
        or edx, 2
        test edi, 800h
        cmove edx, ecx
        mov ecx, edx
        or ecx, 1
        test edi, 1000h
        cmove ecx, edx
        mov ebx, ecx
        or ebx, 80000h
        test edi, 100h
        cmove ebx, ecx
        and eax, 6000h
        mov edx, ebx
        cmp eax, 4000h
        ; Exact mapped bytes 77 1D: ja 0x5887cbc8
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 74 13: je 0x5887cbc0
        __asm _emit 0x74
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5887cbd5
        __asm _emit 0x74
        __asm _emit 0x24
        cmp eax, 2000h
        ; Exact mapped bytes 75 1D: jne 0x5887cbd5
        __asm _emit 0x75
        __asm _emit 0x1d
        or edx, 100h
        ; Exact mapped bytes EB 15: jmp 0x5887cbd5
        __asm _emit 0xeb
        __asm _emit 0x15
        or edx, 200h
        ; Exact mapped bytes EB 0D: jmp 0x5887cbd5
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp eax, 6000h
        ; Exact mapped bytes 75 06: jne 0x5887cbd5
        __asm _emit 0x75
        __asm _emit 0x06
        or edx, 300h
        and edi, 8040h
        sub edi, 40h
        ; Exact mapped bytes 74 1D: je 0x5887cbfd
        __asm _emit 0x74
        __asm _emit 0x1d
        sub edi, 7fc0h
        ; Exact mapped bytes 74 0D: je 0x5887cbf5
        __asm _emit 0x74
        __asm _emit 0x0d
        sub edi, 40h
        ; Exact mapped bytes 75 16: jne 0x5887cc03
        __asm _emit 0x75
        __asm _emit 0x16
        or edx, 1000000h
        ; Exact mapped bytes EB 0E: jmp 0x5887cc03
        __asm _emit 0xeb
        __asm _emit 0x0e
        or edx, 3000000h
        ; Exact mapped bytes EB 06: jmp 0x5887cc03
        __asm _emit 0xeb
        __asm _emit 0x06
        or edx, 2000000h
        mov eax, edx
        xor edx, esi
        or eax, esi
        mov ecx, eax
        or ecx, 80000000h
        test edx, 8031fh
        pop edi
        pop esi
        cmovne eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
