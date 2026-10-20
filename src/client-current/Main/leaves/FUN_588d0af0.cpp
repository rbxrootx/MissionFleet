// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D0AF0 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_588d0af0() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        cmp edi, dword ptr [ecx + 70h]
        lea esi, [ecx + 70h]
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x588d0c11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 74h]
        ; Exact mapped bytes 0F 84 04 01 00 00: je 0x588d0c11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 78h]
        ; Exact mapped bytes 0F 84 FB 00 00 00: je 0x588d0c11
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 7ch]
        lea esi, [ecx + 7ch]
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x588d0bde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x588d0bde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x588d0bde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, dword ptr [ecx + 88h]
        lea esi, [ecx + 88h]
        ; Exact mapped bytes 74 5E: je 0x588d0ba6
        __asm _emit 0x74
        __asm _emit 0x5e
        cmp edi, dword ptr [ecx + 8ch]
        ; Exact mapped bytes 74 56: je 0x588d0ba6
        __asm _emit 0x74
        __asm _emit 0x56
        cmp edi, dword ptr [ecx + 90h]
        ; Exact mapped bytes 74 4E: je 0x588d0ba6
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp edi, dword ptr [ecx + 94h]
        lea esi, [ecx + 94h]
        ; Exact mapped bytes 74 0C: je 0x588d0b72
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp edi, dword ptr [ecx + 98h]
        ; Exact mapped bytes 0F 85 CB 00 00 00: jne 0x588d0c3d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea ebx, [eax + 1]
        lea ebp, [eax + 5]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        cmp edi, edx
        ; Exact mapped bytes 74 05: je 0x588d0b8b
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [edx + 50h], ebx
        ; Exact mapped bytes EB 0A: jmp 0x588d0b95
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [edx + 50h], ebp
        mov edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        add eax, ebx
        add esi, 4
        cmp eax, 2
        ; Exact mapped bytes 7C E1: jl 0x588d0b80
        __asm _emit 0x7c
        __asm _emit 0xe1
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        lea ebp, [edx + 5]
        ; Exact mapped bytes EB 03: jmp 0x588d0bb0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        cmp edi, eax
        ; Exact mapped bytes 74 09: je 0x588d0bbf
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 0F: jmp 0x588d0bce
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [eax + 50h], ebp
        mov ebx, dword ptr [ecx + 50h]
        mov al, dl
        add al, 2
        add al, al
        mov byte ptr [ebx + 58h], al
        inc edx
        add esi, 4
        cmp edx, 3
        ; Exact mapped bytes 7C D9: jl 0x588d0bb0
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        lea ebp, [edx + 5]
        mov eax, dword ptr [esi]
        cmp edi, eax
        ; Exact mapped bytes 74 09: je 0x588d0bf2
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 0F: jmp 0x588d0c01
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [eax + 50h], ebp
        mov ebx, dword ptr [ecx + 50h]
        mov al, dl
        add al, 2
        add al, al
        mov byte ptr [ebx + 57h], al
        inc edx
        add esi, 4
        cmp edx, 3
        ; Exact mapped bytes 7C D9: jl 0x588d0be3
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor edx, edx
        lea ebp, [edx + 5]
        mov eax, dword ptr [esi]
        cmp edi, eax
        ; Exact mapped bytes 74 09: je 0x588d0c25
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [eax + 50h], 1
        ; Exact mapped bytes EB 0F: jmp 0x588d0c34
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov dword ptr [eax + 50h], ebp
        mov ebx, dword ptr [ecx + 50h]
        mov al, dl
        add al, 8
        add al, al
        mov byte ptr [ebx + 56h], al
        inc edx
        add esi, 4
        cmp edx, 3
        ; Exact mapped bytes 7C D9: jl 0x588d0c16
        __asm _emit 0x7c
        __asm _emit 0xd9
        pop edi
        pop esi
        pop ebp
        pop ebx
    }
}
