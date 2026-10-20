// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58872D74 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_58872d74_58872D74() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        xor esi, esi
        test ebx, ebx
        ; Exact mapped bytes 75 06: jne 0x58872d8d
        __asm _emit 0x75
        __asm _emit 0x06
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x58872db8
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes EB 04: jmp 0x58872d91
        __asm _emit 0xeb
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 75 22: jne 0x58872db3
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 1ch]
        push 16h
        pop ebx
        push eax
        push esi
        push esi
        push esi
        push esi
        push esi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], ebx
        ; Exact mapped bytes E8 85 E1 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, ebx
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x58872e4d
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 66 89 0B: mov word ptr [ebx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x58872dc1
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [ecx], esi
        mov ecx, dword ptr [ebp + 18h]
        cmp ecx, eax
        push edi
        mov edi, dword ptr [ebp + 1ch]
        cmova ecx, eax
        cmp ecx, 7fffffffh
        ; Exact mapped bytes 76 04: jbe 0x58872dd9
        __asm _emit 0x76
        __asm _emit 0x04
        push 16h
        ; Exact mapped bytes EB 42: jmp 0x58872e1b
        __asm _emit 0xeb
        __asm _emit 0x42
        push edi
        push ecx
        push dword ptr [ebp + 14h]
        push ebx
        ; Exact mapped bytes E8 6D 00 00 00: call 0x58872e51
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        add esp, 10h
        cmp ecx, -1
        ; Exact mapped bytes 75 14: jne 0x58872e02
        __asm _emit 0x75
        __asm _emit 0x14
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x58872df7
        __asm _emit 0x74
        __asm _emit 0x05
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        cmp byte ptr [edi + 1ch], 0
        ; Exact mapped bytes 74 4D: je 0x58872e4a
        __asm _emit 0x74
        __asm _emit 0x4d
        mov esi, dword ptr [edi + 18h]
        ; Exact mapped bytes EB 48: jmp 0x58872e4a
        __asm _emit 0xeb
        __asm _emit 0x48
        inc ecx
        test ebx, ebx
        ; Exact mapped bytes 74 3A: je 0x58872e41
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 76 2C: jbe 0x58872e3a
        __asm _emit 0x76
        __asm _emit 0x2c
        cmp dword ptr [ebp + 18h], -1
        ; Exact mapped bytes 74 21: je 0x58872e35
        __asm _emit 0x74
        __asm _emit 0x21
        xor eax, eax
        ; Exact mapped bytes 66 89 03: mov word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x03
        push 22h
        pop ebx
        push edi
        push esi
        push esi
        push esi
        push esi
        mov dword ptr [edi + 18h], ebx
        push esi
        mov byte ptr [edi + 1ch], 1
        ; Exact mapped bytes E8 00 E1 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xe1
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, ebx
        ; Exact mapped bytes EB 17: jmp 0x58872e4c
        __asm _emit 0xeb
        __asm _emit 0x17
        push 50h
        mov ecx, eax
        pop esi
        xor eax, eax
        ; Exact mapped bytes 66 89 44 4B FE: mov word ptr [ebx + ecx*2 - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x4b
        __asm _emit 0xfe
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58872e4a
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], ecx
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
