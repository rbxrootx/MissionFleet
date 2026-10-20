// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859AB0 .. +0xE8 bytes.
extern "C" __declspec(naked) void FUN_58859ab0_58859AB0() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        push edi
        test ecx, 3
        ; Exact mapped bytes 74 13: je 0x58859ad0
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [ecx]
        add ecx, 1
        test al, al
        ; Exact mapped bytes 74 3D: je 0x58859b03
        __asm _emit 0x74
        __asm _emit 0x3d
        test ecx, 3
        ; Exact mapped bytes 75 EF: jne 0x58859abd
        __asm _emit 0x75
        __asm _emit 0xef
        mov edi, edi
        mov eax, dword ptr [ecx]
        mov edx, 7efefeffh
        add edx, eax
        xor eax, 0ffffffffh
        xor eax, edx
        add ecx, 4
        test eax, 81010100h
        ; Exact mapped bytes 74 E8: je 0x58859ad0
        __asm _emit 0x74
        __asm _emit 0xe8
        mov eax, dword ptr [ecx - 4]
        test al, al
        ; Exact mapped bytes 74 23: je 0x58859b12
        __asm _emit 0x74
        __asm _emit 0x23
        test ah, ah
        ; Exact mapped bytes 74 1A: je 0x58859b0d
        __asm _emit 0x74
        __asm _emit 0x1a
        test eax, 0ff0000h
        ; Exact mapped bytes 74 0E: je 0x58859b08
        __asm _emit 0x74
        __asm _emit 0x0e
        test eax, 0ff000000h
        ; Exact mapped bytes 74 02: je 0x58859b03
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB CD: jmp 0x58859ad0
        __asm _emit 0xeb
        __asm _emit 0xcd
        lea edi, [ecx - 1]
        ; Exact mapped bytes EB 0D: jmp 0x58859b15
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea edi, [ecx - 2]
        ; Exact mapped bytes EB 08: jmp 0x58859b15
        __asm _emit 0xeb
        __asm _emit 0x08
        lea edi, [ecx - 3]
        ; Exact mapped bytes EB 03: jmp 0x58859b15
        __asm _emit 0xeb
        __asm _emit 0x03
        lea edi, [ecx - 4]
        mov ecx, dword ptr [esp + 0ch]
        test ecx, 3
        ; Exact mapped bytes 74 1D: je 0x58859b3e
        __asm _emit 0x74
        __asm _emit 0x1d
        mov dl, byte ptr [ecx]
        add ecx, 1
        test dl, dl
        ; Exact mapped bytes 74 66: je 0x58859b90
        __asm _emit 0x74
        __asm _emit 0x66
        mov byte ptr [edi], dl
        add edi, 1
        test ecx, 3
        ; Exact mapped bytes 75 EA: jne 0x58859b21
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 05: jmp 0x58859b3e
        __asm _emit 0xeb
        __asm _emit 0x05
        mov dword ptr [edi], edx
        add edi, 4
        mov edx, 7efefeffh
        mov eax, dword ptr [ecx]
        add edx, eax
        xor eax, 0ffffffffh
        xor eax, edx
        mov edx, dword ptr [ecx]
        add ecx, 4
        test eax, 81010100h
        ; Exact mapped bytes 74 E1: je 0x58859b39
        __asm _emit 0x74
        __asm _emit 0xe1
        test dl, dl
        ; Exact mapped bytes 74 34: je 0x58859b90
        __asm _emit 0x74
        __asm _emit 0x34
        test dh, dh
        ; Exact mapped bytes 74 27: je 0x58859b87
        __asm _emit 0x74
        __asm _emit 0x27
        test edx, 0ff0000h
        ; Exact mapped bytes 74 12: je 0x58859b7a
        __asm _emit 0x74
        __asm _emit 0x12
        test edx, 0ff000000h
        ; Exact mapped bytes 74 02: je 0x58859b72
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB C7: jmp 0x58859b39
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov dword ptr [edi], edx
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        mov eax, dword ptr [esp + 8]
        mov byte ptr [edi + 2], 0
        pop edi
        ret
        ; Exact mapped bytes 66 89 17: mov word ptr [edi], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x17
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
        mov byte ptr [edi], dl
        mov eax, dword ptr [esp + 8]
        pop edi
        ret
    }
}
