// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875B90 .. +0x135 bytes.
extern "C" __declspec(naked) void FUN_58875b90_58875B90() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        push edi
        test ecx, ecx
        ; Exact mapped bytes 0F 84 B7 00 00 00: je 0x58875c54
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esp + 8]
        push esi
        test edi, 3
        push ebx
        ; Exact mapped bytes 74 11: je 0x58875bbc
        __asm _emit 0x74
        __asm _emit 0x11
        mov al, byte ptr [edi]
        add edi, 1
        test al, al
        ; Exact mapped bytes 74 39: je 0x58875bed
        __asm _emit 0x74
        __asm _emit 0x39
        test edi, 3
        ; Exact mapped bytes 75 EF: jne 0x58875bab
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, dword ptr [edi]
        mov edx, 7efefeffh
        add edx, eax
        xor eax, 0ffffffffh
        xor eax, edx
        add edi, 4
        test eax, 81010100h
        ; Exact mapped bytes 74 E8: je 0x58875bbc
        __asm _emit 0x74
        __asm _emit 0xe8
        mov eax, dword ptr [edi - 4]
        test al, al
        ; Exact mapped bytes 74 21: je 0x58875bfc
        __asm _emit 0x74
        __asm _emit 0x21
        test ah, ah
        ; Exact mapped bytes 74 18: je 0x58875bf7
        __asm _emit 0x74
        __asm _emit 0x18
        test eax, 0ff0000h
        ; Exact mapped bytes 74 0C: je 0x58875bf2
        __asm _emit 0x74
        __asm _emit 0x0c
        test eax, 0ff000000h
        ; Exact mapped bytes 75 CF: jne 0x58875bbc
        __asm _emit 0x75
        __asm _emit 0xcf
        sub edi, 1
        ; Exact mapped bytes EB 0D: jmp 0x58875bff
        __asm _emit 0xeb
        __asm _emit 0x0d
        sub edi, 2
        ; Exact mapped bytes EB 08: jmp 0x58875bff
        __asm _emit 0xeb
        __asm _emit 0x08
        sub edi, 3
        ; Exact mapped bytes EB 03: jmp 0x58875bff
        __asm _emit 0xeb
        __asm _emit 0x03
        sub edi, 4
        mov esi, dword ptr [esp + 14h]
        test esi, 3
        ; Exact mapped bytes 75 09: jne 0x58875c14
        __asm _emit 0x75
        __asm _emit 0x09
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes 75 5C: jne 0x58875c6e
        __asm _emit 0x75
        __asm _emit 0x5c
        ; Exact mapped bytes EB 22: jmp 0x58875c36
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dl, byte ptr [esi]
        add esi, 1
        test dl, dl
        ; Exact mapped bytes 74 3D: je 0x58875c5a
        __asm _emit 0x74
        __asm _emit 0x3d
        mov byte ptr [edi], dl
        add edi, 1
        sub ecx, 1
        ; Exact mapped bytes 74 29: je 0x58875c50
        __asm _emit 0x74
        __asm _emit 0x29
        test esi, 3
        ; Exact mapped bytes 75 E5: jne 0x58875c14
        __asm _emit 0x75
        __asm _emit 0xe5
        mov ebx, ecx
        shr ecx, 2
        ; Exact mapped bytes 75 38: jne 0x58875c6e
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, ebx
        and ecx, 3
        ; Exact mapped bytes 74 13: je 0x58875c50
        __asm _emit 0x74
        __asm _emit 0x13
        mov dl, byte ptr [esi]
        add esi, 1
        mov byte ptr [edi], dl
        add edi, 1
        test dl, dl
        ; Exact mapped bytes 74 07: je 0x58875c52
        __asm _emit 0x74
        __asm _emit 0x07
        sub ecx, 1
        ; Exact mapped bytes 75 ED: jne 0x58875c3d
        __asm _emit 0x75
        __asm _emit 0xed
        mov byte ptr [edi], cl
        pop ebx
        pop esi
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
        mov byte ptr [edi], dl
        mov eax, dword ptr [esp + 10h]
        pop ebx
        pop esi
        pop edi
        ret
        mov dword ptr [edi], edx
        add edi, 4
        sub ecx, 1
        ; Exact mapped bytes 74 C8: je 0x58875c36
        __asm _emit 0x74
        __asm _emit 0xc8
        mov edx, 7efefeffh
        mov eax, dword ptr [esi]
        add edx, eax
        xor eax, 0ffffffffh
        xor eax, edx
        mov edx, dword ptr [esi]
        add esi, 4
        test eax, 81010100h
        ; Exact mapped bytes 74 DC: je 0x58875c64
        __asm _emit 0x74
        __asm _emit 0xdc
        test dl, dl
        ; Exact mapped bytes 74 CE: je 0x58875c5a
        __asm _emit 0x74
        __asm _emit 0xce
        test dh, dh
        ; Exact mapped bytes 74 2A: je 0x58875cba
        __asm _emit 0x74
        __asm _emit 0x2a
        test edx, 0ff0000h
        ; Exact mapped bytes 74 12: je 0x58875caa
        __asm _emit 0x74
        __asm _emit 0x12
        test edx, 0ff000000h
        ; Exact mapped bytes 75 C4: jne 0x58875c64
        __asm _emit 0x75
        __asm _emit 0xc4
        mov dword ptr [edi], edx
        mov eax, dword ptr [esp + 10h]
        pop ebx
        pop esi
        pop edi
        ret
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        xor edx, edx
        mov eax, dword ptr [esp + 10h]
        mov byte ptr [edi + 2], dl
        pop ebx
        pop esi
        pop edi
        ret
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        mov eax, dword ptr [esp + 10h]
        pop ebx
        pop esi
        pop edi
        ret
    }
}
