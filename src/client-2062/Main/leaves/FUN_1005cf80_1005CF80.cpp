// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005CF80 .. +0x1C4 bytes.
extern "C" __declspec(naked) void FUN_1005cf80_1005CF80() {
    __asm {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr [ebx + 0d0ch]
        push edi
        test eax, eax
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 74 0A: je 0x1005cf9f
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 4ch]
        xor eax, 0aaaaaaaah
        ; Exact mapped bytes 75 04: jne 0x1005cfa3
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 04: jmp 0x1005cfa7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov al, byte ptr [esp + 18h]
        mov ecx, dword ptr [ebx + 53ch]
        and al, 0fh
        ; Exact mapped bytes 66 0F B6 F8: movzx di, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xf8
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov ebp, 0fff0h
        and edx, ebp
        or edx, edi
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, dword ptr [ebx + 0d0ch]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1005cfe4
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [eax + 0b4ch]
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x1005cfe4
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 70 0A: mov si, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x70
        __asm _emit 0x0a
        shr esi, 0ah
        and esi, 1fh
        ; Exact mapped bytes EB 02: jmp 0x1005cfe6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        xor eax, eax
        test esi, esi
        ; Exact mapped bytes 7E 47: jle 0x1005d033
        __asm _emit 0x7e
        __asm _emit 0x47
        lea ecx, [ebx + 0a8h]
        mov ebp, esi
        mov eax, esi
        mov edx, dword ptr [ecx + 414h]
        add ecx, 4
        ; Exact mapped bytes 66 8B 5A 24: mov bx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x24
        and ebx, 0fff0h
        or ebx, edi
        ; Exact mapped bytes 66 89 5A 24: mov word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 4]
        ; Exact mapped bytes 66 8B 5A 24: mov bx, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x5a
        __asm _emit 0x24
        and ebx, 0fff0h
        or ebx, edi
        dec ebp
        ; Exact mapped bytes 66 89 5A 24: mov word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x24
        ; Exact mapped bytes 75 D1: jne 0x1005cff6
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ebx, dword ptr [esp + 10h]
        cmp esi, 1ch
        mov ebp, 0fff0h
        ; Exact mapped bytes 7D 27: jge 0x1005d05a
        __asm _emit 0x7d
        __asm _emit 0x27
        mov esi, 1ch
        lea ecx, [ebx + eax*4 + 0a8h]
        sub esi, eax
        add eax, esi
        mov edx, dword ptr [ecx + 414h]
        add ecx, 4
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        mov edx, dword ptr [ecx - 4]
        ; Exact mapped bytes 66 21 6A 24: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0x24
        dec esi
        ; Exact mapped bytes 75 E9: jne 0x1005d043
        __asm _emit 0x75
        __asm _emit 0xe9
        mov ecx, dword ptr [ebx + 0d0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x1005d10b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0b4ch]
        mov cl, byte ptr [eax + 2]
        mov ebp, dword ptr [eax + 25ch]
        and cl, 1fh
        mov eax, 1ch
        sub cl, 8
        neg cl
        sbb ecx, ecx
        and ecx, 0fffffffdh
        add ecx, 4
        add ecx, eax
        shr ebp, 1bh
        cmp ecx, eax
        mov dword ptr [esp + 18h], ecx
        ; Exact mapped bytes 7E 79: jle 0x1005d112
        __asm _emit 0x7e
        __asm _emit 0x79
        lea esi, [ebx + 118h]
        mov ecx, dword ptr [ebx + 0d0ch]
        mov edx, dword ptr [ecx + 0b4ch]
        mov ecx, 1fh
        sub ecx, eax
        mov edx, dword ptr [edx + 25ch]
        shr edx, cl
        mov ecx, dword ptr [esi + 414h]
        test dl, 1
        ; Exact mapped bytes 74 24: je 0x1005d0e9
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        and edx, 0fff0h
        or edx, edi
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        and edx, 0fff0h
        or edx, edi
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes EB 0F: jmp 0x1005d0f8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 18h]
        add esi, 4
        shr ebp, 1
        inc eax
        cmp eax, ecx
        ; Exact mapped bytes 7C 99: jl 0x1005d09f
        __asm _emit 0x7c
        __asm _emit 0x99
        mov ebp, 0fff0h
        cmp eax, 20h
        ; Exact mapped bytes 7D 2C: jge 0x1005d13c
        __asm _emit 0x7d
        __asm _emit 0x2c
        ; Exact mapped bytes EB 05: jmp 0x1005d117
        __asm _emit 0xeb
        __asm _emit 0x05
        mov ebp, 0fff0h
        mov edx, 20h
        lea ecx, [ebx + eax*4 + 0a8h]
        sub edx, eax
        mov eax, dword ptr [ecx + 414h]
        add ecx, 4
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [ecx - 4]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 E9: jne 0x1005d125
        __asm _emit 0x75
        __asm _emit 0xe9
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
