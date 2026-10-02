// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58873F50 .. +0x1D7 bytes.
extern "C" __declspec(naked) void FUN_58873f50() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov dword ptr [ebp - 8], 0
        push esi
        push edi
        ; Exact mapped bytes 0F 11 45 E0: movups xmmword ptr [ebp - 0x20], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xe0
        ; Exact mapped bytes 66 0F D6 45 F0: movq qword ptr [ebp - 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x45
        __asm _emit 0xf0
        ; Exact mapped bytes D9 75 E0: fnstenv [ebp - 0x20]
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes D9 65 E0: fldenv [ebp - 0x20]
        __asm _emit 0xd9
        __asm _emit 0x65
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 20h]
        and edx, 1f3fh
        mov eax, edx
        mov ebx, edx
        mov ecx, eax
        and ebx, 1000h
        shl ebx, 2
        and ecx, 300h
        ; Exact mapped bytes 74 1A: je 0x58873fae
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp ecx, 200h
        ; Exact mapped bytes 74 09: je 0x58873fa5
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 10: jmp 0x58873fb5
        __asm _emit 0xeb
        __asm _emit 0x10
        mov dword ptr [ebp - 4], 1000h
        ; Exact mapped bytes EB 07: jmp 0x58873fb5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 2000h
        and eax, 0c00h
        cmp eax, 800h
        ; Exact mapped bytes 77 1B: ja 0x58873fdc
        __asm _emit 0x77
        __asm _emit 0x1b
        ; Exact mapped bytes 74 12: je 0x58873fd5
        __asm _emit 0x74
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x58873fe3
        __asm _emit 0x74
        __asm _emit 0x1c
        cmp eax, 400h
        ; Exact mapped bytes 75 15: jne 0x58873fe3
        __asm _emit 0x75
        __asm _emit 0x15
        mov esi, 100h
        ; Exact mapped bytes EB 17: jmp 0x58873fec
        __asm _emit 0xeb
        __asm _emit 0x17
        mov esi, 200h
        ; Exact mapped bytes EB 10: jmp 0x58873fec
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 0c00h
        ; Exact mapped bytes 74 04: je 0x58873fe7
        __asm _emit 0x74
        __asm _emit 0x04
        xor esi, esi
        ; Exact mapped bytes EB 05: jmp 0x58873fec
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 300h
        mov edi, edx
        mov eax, edx
        shr edi, 2
        and eax, 10h
        and edi, 8
        mov ecx, edx
        or edi, eax
        and ecx, 2
        shr edi, 2
        mov eax, edx
        and eax, 8
        shl ecx, 3
        or edi, eax
        mov eax, edx
        shr edi, 1
        and eax, 4
        or ecx, eax
        and edx, 1
        add ecx, ecx
        shl edx, 4
        or edi, ecx
        or edi, edx
        or edi, ebx
        or edi, dword ptr [ebp - 4]
        or edi, esi
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        ; Exact mapped bytes 7D 04: jge 0x58874036
        __asm _emit 0x7d
        __asm _emit 0x04
        xor ecx, ecx
        ; Exact mapped bytes EB 0D: jmp 0x58874043
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 0F AE 5D FC: stmxcsr dword ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffc0h
        mov eax, ecx
        mov edx, 8000h
        and eax, 8040h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 07: jne 0x5887405b
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebx, 0c00h
        ; Exact mapped bytes EB 1F: jmp 0x5887407a
        __asm _emit 0xeb
        __asm _emit 0x1f
        ; Exact mapped bytes 66 83 F8 40: cmp ax, 0x40
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x40
        ; Exact mapped bytes 75 07: jne 0x58874068
        __asm _emit 0x75
        __asm _emit 0x07
        mov ebx, 800h
        ; Exact mapped bytes EB 12: jmp 0x5887407a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov esi, 8040h
        xor ebx, ebx
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        mov edx, 400h
        cmove ebx, edx
        mov eax, ecx
        and eax, 6000h
        cmp eax, 4000h
        ; Exact mapped bytes 77 1F: ja 0x588740a7
        __asm _emit 0x77
        __asm _emit 0x1f
        ; Exact mapped bytes 74 16: je 0x588740a0
        __asm _emit 0x74
        __asm _emit 0x16
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5887409c
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp eax, 2000h
        ; Exact mapped bytes 75 07: jne 0x5887409c
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, 100h
        ; Exact mapped bytes EB 17: jmp 0x588740b3
        __asm _emit 0xeb
        __asm _emit 0x17
        xor edx, edx
        ; Exact mapped bytes EB 13: jmp 0x588740b3
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, 200h
        ; Exact mapped bytes EB 0C: jmp 0x588740b3
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp eax, 6000h
        ; Exact mapped bytes 75 EE: jne 0x5887409c
        __asm _emit 0x75
        __asm _emit 0xee
        mov edx, 300h
        mov esi, ecx
        mov eax, ecx
        shr esi, 2
        and eax, 800h
        and esi, 400h
        or esi, eax
        mov eax, ecx
        and eax, 400h
        shr esi, 2
        or esi, eax
        mov eax, ecx
        and eax, 200h
        shr esi, 2
        or esi, eax
        and ecx, 180h
        shr esi, 3
        or esi, ecx
        mov ecx, edi
        shr esi, 3
        and ecx, 3fh
        or esi, ebx
        or esi, edx
        mov edx, esi
        mov eax, esi
        and eax, 0ffffff00h
        and edx, 3fh
        shl edx, 2
        or eax, edx
        shl eax, 6
        or eax, ecx
        mov ecx, edi
        shl eax, 2
        and ecx, 300h
        or eax, ecx
        shl eax, 0eh
        or eax, esi
        or eax, edi
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
