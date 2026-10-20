// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887C780 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_5887c780_5887C780() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        ; Exact mapped bytes DD 7D FC: fnstsw word ptr [ebp - 4]
        __asm _emit 0xdd
        __asm _emit 0x7d
        __asm _emit 0xfc
        ; Exact mapped bytes DB E2: fnclex
        __asm _emit 0xdb
        __asm _emit 0xe2
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 66 8B 5D FC: mov bx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5d
        __asm _emit 0xfc
        ; Exact mapped bytes 0F 8C AC 00 00 00: jl 0x5887c84b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        xor esi, esi
        test bl, 3fh
        ; Exact mapped bytes 74 40: je 0x5887c7e7
        __asm _emit 0x74
        __asm _emit 0x40
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
        mov esi, edx
        or esi, 1
        test bl, 20h
        cmove esi, edx
        test bl, 2
        ; Exact mapped bytes 74 06: je 0x5887c7e7
        __asm _emit 0x74
        __asm _emit 0x06
        or esi, 80000h
        ; Exact mapped bytes 0F AE 5D F8: stmxcsr dword ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 8]
        and eax, 0ffffffc0h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F AE 55 F4: ldmxcsr dword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x55
        __asm _emit 0xf4
        mov ebx, dword ptr [ebp - 8]
        xor ecx, ecx
        test bl, 3fh
        ; Exact mapped bytes 74 3F: je 0x5887c841
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, ebx
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
        test bl, 2
        ; Exact mapped bytes 74 06: je 0x5887c841
        __asm _emit 0x74
        __asm _emit 0x06
        or ecx, 80000h
        or ecx, esi
        pop esi
        mov eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
        xor ecx, ecx
        test bl, 3fh
        ; Exact mapped bytes 74 40: je 0x5887c892
        __asm _emit 0x74
        __asm _emit 0x40
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
        test bl, 2
        ; Exact mapped bytes 74 06: je 0x5887c892
        __asm _emit 0x74
        __asm _emit 0x06
        or ecx, 80000h
        mov eax, ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
